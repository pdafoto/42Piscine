int	ft_check_colup(int board, int col, int row, int size)
{
	int	ctr;
	int	top;
	int	max;
	int	zero;

	ctr = 1;
	top = 0;
	zero = 0;
	dir = 0;
	max = board [0][col];
	while (top < size)
	{
		if (board[top][col] == 0)
			zero++;
		if (board[top][col] > max)
		{
			ctr++;
			max = board [top][col];
		}
		top++;
	}
	ft_comp(ctr, 0, board, zero);
}
