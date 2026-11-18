#include <stdio.h>
int main()
{
	int i = 1;
	while(i < 1)
	{
		printf("%d. Hello world!\n",i++);
	}
	
	i = 0;
	do
	{
		printf("%d. Hello world!\n",i++);
	}
	while( i <= 1);
	
	
	return 0;
}
