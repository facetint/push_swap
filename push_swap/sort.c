/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:49:10 by facetint          #+#    #+#             */
/*   Updated: 2023/11/01 01:41:02 by facetint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_is_num(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-')
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (!(ft_isdigit(s[i])))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sorted(int *stack_a, int size, int flag)
{
	int	i;

	i = 0;
	while ((flag == 0) && (++i < size))
	{
		if (stack_a[i - 1] > stack_a[i])
			return (0);
	}
	while ((flag == 1) && (++i < size))
	{
		if (stack_a[i - 1] < stack_a[i])
			return (0);
	}
	return (1);
}

int	ft_sort(t_stack *stack, int size)
{
	if (ft_is_sorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack, 0);
		else if (size == 3)
			ft_sort_three(stack);
		else
			ft_first_seperation(stack, size);
	}
	return (1);
}

void	ft_check_repeat(t_stack *stack, int size, char **av, int control)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack->a[i] == stack->a[j])
				ft_free_av(av, stack, control);
			j++;
		}
		i++;
		j = i + 1;
	}
}
