/*Program made in Visual Studio 2012, language C*/

//#define		_CRT_SECURE_NO_WARNINGS

#include	<stdio.h>
//#include	<conio.h>

void	ft_queen(int row, int n);
void	print(int n);
int		ft_check(int row, int column);
int		ft_abs(int n);

int		board[20], count;

int		main(void)
{
	int		n;

	printf("Enter numbers of Queens:"); scanf("%d", &n);
	ft_queen(1, n);
//	_getch();
	return (0);
}

void	ft_queen(int row, int n)	//backtracking function
{
	int	column;
	
	column = 1;
	while (column<=n)
	{
		if (ft_check(row, column))
		{
			board[row] = column;
			if (row == n)
				print(n);
			else
				ft_queen(row+1, n);
		}
		column++;
	}
}

void	print(int n)	//print function
{
	int i,j;

	printf("\n\nSolution %d:\n\n",++count);
	i = 1;
	while (i <= n)
		printf("\t%d",i++);
	i = 1;		
	while (i <= n)
	{
		printf("\n\n%d", i);
		j = 1;
		while (j <= n)
		{
			if (board[i] == j)
				printf("\tQ");
			else
				printf("\t-");
			j++;
		}
		i++;
	}
}

int		ft_check(int row, int column)	// check if the position is valid or not
{
	int		i;

	i = 1;
	while (i <= row - 1)
	{
		if (board[i] == column)
			return (0);
		else
			if (ft_abs(board[i] - column) == ft_abs(i - row))
				return (0);
		i++;
	}
	return (1);
}

int		ft_abs(int n)	// absolut value
{
	if (n < 0)
		return (-n);
	else
		return (n);
}