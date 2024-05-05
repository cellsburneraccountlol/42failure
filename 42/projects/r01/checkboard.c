
int		check_col_up(int board[4][4], int col, int num)
{
	int i;
	int max;
	int count;

	i = 0;
	count = 1;
	max = board[i][col];
	while (i < 4)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}
/*check to see if the number of 'building visible' is the same as num, through x = 1 ,everytime 
something bigger than x , y++ , y = num , colum is valid*/
int		check_col_down(int board[4][4], int col, int num)
{
	int i;
	int max;
	int count;

	i = 3;
	count = 1;
	max = board[i][col];
	while (i >= 0)
	{
		if (board[i][col] > max)
		{
			max = board[i][col];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}
/*same concept as check up , just checking upwards this time*/
int		check_row_left(int board[4][4], int row, int num)
{
	int i;
	int max;
	int count;

	i = 0;
	count = 1;
	max = board[row][i];
	while (i < 4)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i++;
	}
	if (count == num)
		return (1);
	return (0);
}/*same concept as check up , just checking leftright this time*/

int		check_row_right(int board[4][4], int row, int num)
{
	int i;
	int max;
	int count;

	i = 3;
	count = 1;
	max = board[row][i];
	while (i >= 0)
	{
		if (board[row][i] > max)
		{
			max = board[row][i];
			count++;
		}
		i--;
	}
	if (count == num)
		return (1);
	return (0);
}
/*same concept as check up , just checking rightleft this time*/


int		checkboard(int board[4][4], int *in_num)
{
	int i;

	i = 0;
	while (in_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!check_col_up(board, i, in_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!check_col_down(board, i - 4, in_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!check_row_left(board, i - 8, in_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!check_row_right(board, i - 12, in_num[i]))
				return (0);
		i++;
	}
	return (1);
}
/*If valid return 1 . Check ColumUp for 0<=i<=3 , Coldown for 4<=1<=7 f, etc ... 
	check that num = number of "building you can see' for that specific side cell*/