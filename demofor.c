#include<stdio.h>
int main()
{
	int i,so;
	printf("Vui long nhap so bang cuu chuong: ");
	scanf("%d",&so);
	printf("Bang cuu chuong %d:\n",so);
	for( i = 1 ; i <= 10 ; i++)
	{
		printf("\t%d * %d = %d\n",so,i,so*i);
	} //  end of for	
	return 0;
}
