
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*basic write char func*/

void	stampa(int board[4][4])
{
	int	rig;
	int col;

	rig = 0;
	col = 0;
	while (rig < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(board[rig][col] + '0');
			if(col < 3)
			{
				ft_putchar(' ');
			}
			col++;
		}
		ft_putchar('\n');
		rig++;
	}
}
/*print board with spaces between the chars */