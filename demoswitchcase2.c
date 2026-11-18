#include <stdio.h>
int main()
{
	int toantu;
	printf("Vui long nhap chuc nang (1,2,3,4,5): ");
	scanf("%d",&toantu);
	switch(toantu)
	{
		case 1:
			printf("Sao ke");			
			break;
		case 2:
			printf("Rut tien");			
			break;
		case 3:
			printf("Chuyen tien");			
			break;
		case 4:
			printf("Kiem tra so du");			
			break;
		case 5:
			printf("Gui tiet kiem");			
			break;
		default:
			printf("Ban nhap sai chuc nang. Vui long nhap lai.");
			break;			
	}
}
