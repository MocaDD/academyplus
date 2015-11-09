/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_best_practices_.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:07:59 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/09 18:32:43 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_validate_open()

void	ft_validate_line(char *buff)
{
	int		index, cnt;

	index = 0;
	cnt = 0;
	while (buff[index])
	{
		if (buff[index] == ';')
			cnt++;
		index++;
	}
	if (cnt < 4)
		printf("Nu am gasit linii");
	if (cnt > 4)
		printf("");
}

int		main(void)
{
	FILE	*fp;
	char	buff[255];
	char	fname[20], lname[20], email[20], grade[5], city[5];
	

	fp = fopen("students.csv", "r");
	if (!ft_validate_open(fp))
		return (0);
	while (fscanf(fp, "%s", buff) > 0)
	{
		ft_validate_line(buff);
		printf("Test");
	}
	return (0);
}
