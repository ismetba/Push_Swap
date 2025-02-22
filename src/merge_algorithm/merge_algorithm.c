#include "../../includes/push_swap.h"

int	next_to_power_of_two(int size)
{
	int	result;

	result = 2;
	while (result <= size)
		result *= 2;
	return (result);
}

int	multiple_of_next_i(int i, int size)
{
	int	result;

	result = i;
	while (result < size)
		result += i;
	return (result);
}

void	move_to_b(t_stacks *stacks, int i)
{
	int	size;

	size = stacks->size_of_org_lst - multiple_of_next_i(i / 2,
			stacks->size_of_org_lst / 2);
	if (multiple_of_next_i(i / 2, stacks->size_of_org_lst / 2) - size > i / 2)
	{
		size = size + (i / 2);
	}
	while (size--)
		pb(stacks);
}

static void	sort_by_two(t_stacks *stacks, int size)
{
	if (ft_lstsize(stacks->stack_a) > ft_lstsize(stacks->stack_b))
		size++;
	while (size--)
	{
		if (*(int *)stacks->stack_a->content<*(int *)stacks->stack_a->next->content
			&&*(int *)stacks->stack_b->content>
			* (int *)stacks->stack_b->next->content)
			;
		else if (*(int *)stacks->stack_a->content > *(int *)stacks->stack_a->next->content
			&& *(int *)stacks->stack_b->content < *(int *)stacks->stack_b->next->content)
			ss(stacks);
		else if (*(int *)stacks->stack_a->content > *(int *)stacks->stack_a->next->content)
			sa(stacks);
		else if (*(int *)stacks->stack_b->content < *(int *)stacks->stack_b->next->content)
			sb(stacks);
		rr(stacks);
		rr(stacks);
	}
	if (ft_lstsize(stacks->stack_b) % 2)
		rb(stacks);
}

static void	sort_to_a(t_stacks *stacks, int a_move_right, int b_move_right)
{
	int	total_move_right;

	total_move_right = a_move_right + b_move_right;
	while (total_move_right--)
	{
		if (!b_move_right || (a_move_right
				&& *(int *)ft_lstlast(stacks->stack_a)->content > *(int *)stacks->stack_b->content))
		{
			rra(stacks);
			a_move_right--;
		}
		else
		{
			pa(stacks);
			b_move_right--;
		}
	}
}

void	merge_algorithm(t_stacks *stacks)
{
	int	i;
	int	j;
	int	next_to_pow_of_two;

	next_to_pow_of_two = next_to_power_of_two(stacks->size_of_org_lst);
	i = 4;
	move_to_b(stacks, i);
	sort_by_two(stacks, stacks->size_of_org_lst / 4);
	while (multiple_of_next_i(i, stacks->size_of_org_lst) > i)
	{
		j = 1;
		while (multiple_of_next_i(i, stacks->size_of_org_lst) >= i * j)
		{
			sort_to_a(stacks, ft_lstsize(stacks->stack_a) + (i
					/ 4) >= stacks->size_of_org_lst
				&& ft_lstsize(stacks->stack_a) % i == 0 ? 0 : i / 2,
				ft_lstsize(stacks->stack_b) < i
				/ 2 ? ft_lstsize(stacks->stack_b) : i / 2);
			j++;
		}
		i *= 2;
		if (multiple_of_next_i(i, stacks->size_of_org_lst) >= i)
			move_to_b(stacks, i);
	}
	sort_to_a(stacks, i / 2, ft_lstsize(stacks->stack_b) < i
		/ 2 ? ft_lstsize(stacks->stack_b) : i / 2);
}
