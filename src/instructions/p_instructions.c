#include "../../includes/push_swap.h"


static void pa_lst_op(t_stacks *stacks)
{
    t_list *dummy_node;

    dummy_node = stacks->stack_b;
    stacks->stack_b = stacks->stack_b->next;
    dummy_node->next = NULL;
    ft_lstadd_front(&stacks->stack_a,dummy_node);
}

static void pb_lst_op(t_stacks *stacks)
{
    t_list *dummy_node;

    dummy_node = stacks->stack_a;
    stacks->stack_a = stacks->stack_a->next;
    dummy_node->next = NULL;
    ft_lstadd_front(&stacks->stack_b,dummy_node);
}

void pa(t_stacks *stacks)
{
    pa_lst_op(stacks);
    ft_putendl_fd("pa",1);
}
void pb(t_stacks *stacks)
{
    pb_lst_op(stacks);
    ft_putendl_fd("pb",1);
}
void pp(t_stacks *stacks)
{
    pa_lst_op(stacks);
    t_list *dummy_node;

    dummy_node = stacks->stack_a->next;
    stacks->stack_a->next = stacks->stack_a->next->next;
    dummy_node->next = NULL;

    ft_lstadd_front(&stacks->stack_b,dummy_node);
    ft_putendl_fd("pp",1);
}