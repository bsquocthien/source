#include<stdio.h>
int main()
{
	int a;
	do
	{
		printf("Vui long nhap gia tri so > 0: ");
		scanf("%d",&a);
	}
	while(a %2 == 1);
	// while(a %2 )
	// while (a %2 != 0)
	
	// Thuc hien cac cau lenh tiep theo
	printf("Ban da nhap dung yeu cau mot so nguyen: %d",a);
	return 0;
}
