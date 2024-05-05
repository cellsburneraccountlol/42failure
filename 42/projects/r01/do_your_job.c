

int		checkboard(int board[4][4], int *in_num);

int		lookfor0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}
/*get mem adress of r ,c set them to the value of next empty
cell , if no empty cells are found, return 0*/

int		safecol(int board[4][4], int col, int num)
{
	int row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}
/*checkif the collum edited has num, if yes return 0 (not safe) */

int		saferow(int board[4][4], int row, int num)
{
	int col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}
/*checkif the row edited has num, if yes return 0 (not safe) */

int		checksafe(int board[4][4], int r, int c, int num)
{
	if (((saferow(board, r, num)) && (safecol(board, c, num))
				&& (board[r][c] == 0)))
		return (1);
	return (0);
}
/*check row + colum ! have num & current working value = 0*/

int		doyourstuff(int board[4][4], int *input)
{
	int row;
	int col;
	int n;

	n = 1;
	if ((lookfor0(board, &row, &col) == 0) && (checkboard(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (checksafe(board, row, col, n))
		{
			board[row][col] = n;
			if (doyourstuff(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
/*look for 0 and if a cell is found with 0  set row & col value to the coord of the cell else return 0
 check board for proper values , if values proper return 1 , if return zero = 0 , chekboard  =1 , puzzle is 
 solved and return zero
 if not , checksafe the working cell, if safe assign it n ,then recursive call the fucntion to find the solution
 though backtracking . If n = safe , call itslef again with updated board, else reset cell ,
 return 0 and try with n++*/