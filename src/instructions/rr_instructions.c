#include "../../includes/push_swap.h"

static void	rra_lst_op(t_stacks *stacks)
{
	int		size;
	t_list	*stack_a;
	t_list	*dummy_node;

	stack_a = stacks->stack_a;
	dummy_node = ft_lstlast(stack_a);
	size = ft_lstsize(stack_a);
	while (size-- > 2)
		stack_a = stack_a->next;
	stack_a->next = NULL;
	dummy_node->next = stacks->stack_a;
	stacks->stack_a = dummy_node;
}

static void	rrb_lst_op(t_stacks *stacks)
{
	int		size;
	t_list	*stack_b;
	t_list	*dummy_node;

	stack_b = stacks->stack_b;
	dummy_node = ft_lstlast(stack_b);
	size = ft_lstsize(stack_b);
	while (size-- > 2)
		stack_b = stack_b->next;
	stack_b->next = NULL;
	dummy_node->next = stacks->stack_b;
	stacks->stack_b = dummy_node;
}

void	rra(t_stacks *stacks)
{
	rra_lst_op(stacks);
	ft_putendl_fd("rra", 1);
}
void	rrb(t_stacks *stacks)
{
	rrb_lst_op(stacks);
	ft_putendl_fd("rrb", 1);
}
void	rrr(t_stacks *stacks)
{
	rra_lst_op(stacks);
	rrb_lst_op(stacks);
	ft_putendl_fd("rrr", 1);
}