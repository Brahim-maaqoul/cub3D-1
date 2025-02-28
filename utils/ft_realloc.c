/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 01:25:02 by babkar            #+#    #+#             */
/*   Updated: 2023/01/12 18:21:34 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
char	**ft_realloc(char **map, int size)
{
    char **new_map;
	int		i;
	
	i = 0;
	if (map == NULL)
	{
		map = (char **)malloc((size + 1) * sizeof(char *));
		return map;
	}
	if (size == 0)
		return NULL;
	new_map = (char **)malloc((size + 1) * sizeof(char *));
	if (!new_map)
		exit(1);
	while (i < size)
	{
		new_map[i] = map[i];
		i++;
	}
	new_map[size] = NULL;
	free(map);
	return (new_map);
}