#include <unistd.h>


void 	numcheck(int x[], int num)
{

}

void 	arrgen(int x[] , int num)
{
	//recursive gen arrs fir checking , how ? 
	// case 3 
	/*something like */
	int cln = 0 ;
	while(cln < num){
		int iii = 0;
		int can = 0 ;
		while(can < 9 )
		{
			x[iii] ++ ;
			//docheck 
			iii ++ ; 
		}
		can ++ ; 
		cln++ ;
	}
}



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_print_combc(int n)
{
	if( n < 2 || n > 9)
	{
		write(1,"Enter within 2 & 9", 18);
	}
	int arr[n]
	//generate