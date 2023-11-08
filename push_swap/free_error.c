/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:47:53 by facetint          #+#    #+#             */
/*   Updated: 2023/11/01 02:33:34 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	free_error(t_stack *stack, int num, int control)
{
	int	a;

	a = 0;
	free(stack->a);
	stack->a = NULL;
	free(stack->b);
	stack->b = NULL;
	get_next_line(404);
	if (control == 2)
	{
		while (stack->av[a])
		{
			if (stack->av[a])
				free(stack->av[a]);
			a++;
		}
		free(stack->av);
	}
	free(stack);
	stack = NULL;
	if (num)
		write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_av(char **av, t_stack *stack, int control)
{
	int	a;

	a = 0;
	if (control == 2)
	{
		while (av[a])
		{
			free(av[a]);
			a++;
		}
		free(av);
	}
	ft_error(stack);
}

void	ft_error(t_stack *stack)
{
	free (stack->a);
	free (stack->b);
	free (stack);
	write(2, "Error\n", 6);
	exit (1);
}
