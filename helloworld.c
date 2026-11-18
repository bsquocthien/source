#include<stdio.h>
int main()
{
	//Nhap a,b;
	int a,b;	
	printf("vui long nhap a, b: ");
	scanf("%d %d",&a,&b);
	// Xet dieu kien b = 0 ?
	if ( b == 0)
	{
		// thuc hien neu dung	
		printf("\nVo nghiem");
	}
	else
	{
		// thuc hien neu sai
		printf("\nNghiem c = %0.2f",(float)a/(float)b);
	}
	return 0;
}
