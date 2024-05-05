
#include <unistd.h>

int		doyourstuff(int board[4][4], int *input);

void	stampa(int board[4][4]);

void	lookfor4_1(int board[4][4], int *input, int pos)
{
	int fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		pos++;
	}
}
/*look for 4 in last 8 inputs(L + R )since all side cells correspond to num , 
if num = 4 print from the adjacent side cell 1234 */

void	lookfor4_0(int board[4][4], int *input)
{
	int pos;
	int fill;

	pos = 0;
	fill = 0;
	while ((input[pos]) && pos < 8)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
			while (fill < 4)
			{
				board[fill][pos] = fill + 1;
				fill++;
			}
		fill = 4;
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		pos++;
	}
	lookfor4_1(board, input, pos);
}
/*look for 4 in first 8 inputs(T + D )since all side cells correspond to num , 
if num = 4 print from the adjacent side cell 1234 then call lookfor4_1 */

void	lookfor1(int board[4][4], int *input)
{
	int pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	lookfor4_0(board, input);
}
/*look for num = 1 , if yes init side cell with 4 , then call lookfor4_0*/

int		initboard(int *input)
{
	int		rig;
	int		col;
	int		board[4][4];

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[rig][col] = 0;
			col++;
		}
		rig++;
	}
	lookfor1(board, input);
	if ((doyourstuff(board, input)) == 1)
		stampa(board);
	else
		write(1, "\nERROR\n\n", 20);
	return (0);
}
/*init 4*4 arr , assign the number that are guaranteed through,lookfor1 
call doyourstuff, if return 1 , print the board, else print err mssg */