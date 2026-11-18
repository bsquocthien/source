#include<stdio.h>
int main()
{
	int sophantu = 1000;
	int mangNguyen[sophantu];
	int i;
	for(i = 0; i < sophantu; i++)
		mangNguyen[i] = i;
	for(i = 1; i < sophantu; i = i + 2 )
		printf("%d\n",i);	
	return 0;
}
