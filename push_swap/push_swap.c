/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:48:07 by facetint          #+#    #+#             */
/*   Updated: 2023/11/02 10:43:12 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include "libft/libft.h"

void	ft_push_swap(char **av, int control)
{
	t_stack	*stack;
	int		size;
	int		i;

	i = -1;
	stack = malloc(sizeof(t_stack));
	size = ft_ps_strlen(av);
	stack->a = malloc(sizeof(int) * size);
	if (!stack->a)
		return ;
	stack->size_a = size;
	stack->b = malloc(sizeof(int) * size);
	if (!stack->b)
	{
		free (stack->a);
		return ;
	}
	stack->size_b = 0;
	while (++i < size)
		stack->a[i] = ft_ps_atoi(av[i], stack, av, control);
	ft_check_repeat(stack, size, av, control);
	ft_sort(stack, size);
	free (stack->a);
	free (stack->b);
	free (stack);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		av++;
		av = ft_split(*av, ' ');
		ft_push_swap(av, 2);
		while (av[i])
		{
			free(av[i]);
			i++;
		}
		free(av);
	}
	else
		ft_push_swap(++av, 1);
	return (0);
}
