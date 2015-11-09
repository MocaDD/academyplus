/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_best_practices_.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 17:07:59 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/09 19:42:15 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_check_and_print(char *fname, char *lname, char *grade, char *city)
{
	if(strcmp(e,"Cluj") == 0 && atof(grade) > 8.00)
		printf("%s %s\n", fname, lname);
}

void	ft_add_fname(char *fname, char *buff, int k, int i)
{
	fname[k] = buff[i];
	if (buff[i + 1] == ';')
		a[k + 1] = '\0';
}

void	ft_add_lname(char *lname, char *buff, int k, int i)
{
	lname[k] = buff[i];
	if (buff[i + 1] == ';')
		a[k + 1] = '\0';
}

void	ft_stock_data(char *fname, char *lname, char *email, char *grade, char *city, char *buff)
{
	int		i, j, k;
	i = 0;
	j = 0;
	k = 0;
	while (buff[i])
	{
		if (buff[i] == ';')
		{
			j++;
			k = 0;
		}
		else
		{
			if (j == 0)
				ft_add_fname(fname, buff, k, i);
			if (j == 1)
				ft_add_lname(lname, buff, k, i);
			k++;
		}
		i++;
	}
}

int		ft_validate_open(FILE *fp)
{
	if (fp == NULL)
	{
		printf("No file was opened");
		return (0);
	}
	else
		return (1);
}

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
		printf("Incomplete line.");
	if (cnt > 4)
		printf("Too many lines");
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
		ft_stock_data(fname, lname, email, grade, city, buff);
		ft_check_and_print(fname, lname, grade, city);
	}
	return (0);
}
