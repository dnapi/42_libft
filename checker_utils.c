#include "push_swap.h"

/*
void    repeat_f(void (*f)(t_circ_duo *, int), int n, t_circ_duo *stk, int i)
{
    while (n-- > 0)
        f(stk, i);
}
*/

void	init_oper(char p_str[][4])
{
	ft_strlcpy(p_str[0], "pa\n", 4);
	ft_strlcpy(p_str[1], "pb\n", 4);
	ft_strlcpy(p_str[2], "sa\n", 4);
}

void	init_oper_fun(oper_stk *fun)
{
	fun[0] = pa;
	fun[1] = pb;
	fun[2] = sa;
}

int	oper_id(char *str)
{
	char p_str[12][4];
	oper_stk	fun[12]
	int	i;

	init_oper(p_str);
	init_oper_fun(fun);
	i = 0;
	while (p_str[i] && i < 12)
	{
		if (!ft_strncmp(str, p_str[i++], 4))
				break;
	}
	return (i - 1);
}
