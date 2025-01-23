#include "../../includes/push_swap.h"

static void init_algo(t_stacks *stacks)
{
    int size = stacks->size_of_org_lst / 2;
    while (size--)
        pb(stacks);
}

static void sort_by_two(t_stacks *stacks)
{
    if (*(int *)stacks->stack_a->content < *(int *)stacks->stack_a->next->content && *(int *)stacks->stack_b->content > *(int *)stacks->stack_b->next->content)
        ;
    else if (*(int *)stacks->stack_a->content > *(int *)stacks->stack_a->next->content && *(int *)stacks->stack_b->content < *(int *)stacks->stack_b->next->content)
        ss(stacks);
    else if (*(int *)stacks->stack_a->content > *(int *)stacks->stack_a->next->content)
        sa(stacks);
    else if (*(int *)stacks->stack_b->content < *(int *)stacks->stack_b->next->content)
        sb(stacks);
    rr(stacks);
    rr(stacks);
}

static void sort_to_b(t_stacks *stacks, int count_a, int count_b)
{
    int total_count = count_a + count_b;
    while (total_count--)
    {
        if ((count_a && *(int *)stacks->stack_a->content < *(int *)ft_lstlast(stacks->stack_b)->content) || count_b == 0)
        {
            pb(stacks);
            count_a--;
        }
        else
        {
            rrb(stacks);
            count_b--;
        }
    }
}
static void sort_to_a(t_stacks *stacks, int count_a, int count_b)
{
    int total_count = count_a + count_b;
    while (total_count--)
    {
        if ((count_b && *(int *)stacks->stack_b->content > *(int *)ft_lstlast(stacks->stack_a)->content) || count_a == 0)
        {
            pa(stacks);
            count_b--;
        }
        else
        {
            rra(stacks);
            count_a--;
        }
    }
}
static void algorithm(t_stacks *stacks, int i, int j)
{
    int refresh = i / 2;
    sort_to_a(stacks, i / 2, i / 2);
    while (refresh--)
    {
        rra(stacks);
    }
    sort_to_b(stacks, i / 2, i / 2);
    refresh = i / 2;
    while (refresh-- && (stacks->size_of_org_lst / 2) != i * j)
    {
        rrb(stacks);
    }
}

void merge_algorithm(t_stacks *stacks)
{
    int i = 4;
    int j = 0;
    init_algo(stacks);
    int size = stacks->size_of_org_lst / 2;
    while (size--)
        sort_by_two(stacks);
    while (i * 2 <= stacks->size_of_org_lst)
    {
        while (j++ < stacks->size_of_org_lst / 2 / i)
        {
            algorithm(stacks, i, j);
        }
        i *= 2;
        j = 0;
    }
    sort_to_a(stacks,i/2,i/2);
}