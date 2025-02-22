#include "../../includes/push_swap.h"

static void	sa_lst_op(t_stacks *stacks)
{
	t_list	*dummy_node;

	dummy_node = stacks->stack_a->next;
	stacks->stack_a->next = stacks->stack_a->next->next;
	dummy_node->next = stacks->stack_a;
	stacks->stack_a = dummy_node;
}

static void	sb_lst_op(t_stacks *stacks)
{
	t_list	*dummy_node;

	dummy_node = stacks->stack_b->next;
	stacks->stack_b->next = stacks->stack_b->next->next;
	dummy_node->next = stacks->stack_b;
	stacks->stack_b = dummy_node;
}

void	sa(t_stacks *stacks)
{
	sa_lst_op(stacks);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stacks *stacks)
{
	sb_lst_op(stacks);
	ft_putendl_fd("sb", 1);
}

void	ss(t_stacks *stacks)
{
	sa_lst_op(stacks);
	sb_lst_op(stacks);
	ft_putendl_fd("ss", 1);
}