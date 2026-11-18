#include<stdio.h>
void tinhTong(char toantu, int a, int b)
{
	/*
	int a,b;
	float c;
	char toantu;
	printf("Vui long nhap 2 so a,b: ");
	scanf("%d %d", &a,&b);
	printf("Vui long nhap toan tu: ");
	scanf("%c", &toantu);
	*/
	if(toantu == '+')
	{
		printf("Tong %d + %d = %d",a,b,a + b);
	}
	//return 0;
}
int tinhHieu()
{
	int a,b;
	float c;
	char toantu;
	printf("Vui long nhap 2 so a,b: ");
	scanf("%d %d", &a,&b);
	printf("Vui long nhap toan tu: ");
	scanf("%c", &toantu);
	return a - b;
}
int tinhTich(int a, int b)
{
	return a * b;
}
void tinhThuong(int a, int b, char toantu)
{
	float c;
	if(toantu == '/')
	{
		if(b!=0)
		{
			c = (float)a/(float)b;
			printf("Thuong %d %c %d = %f",a,toantu,b,c);
		}
		else
			printf("Chia cho 0.");
	}
	//return 0;
}

void main()
{
	int a,b;// nhap 2 so
	char toantu;// nhap phep toan
	printf("Vui long nhap toan tu: ");
	scanf("%c",& toantu);
	printf("Vui long nhap 2 so a,b: ");
	scanf("%d %d",&a,&b);
	switch(toantu)
	{
		case '+':
			tinhTong(toantu,a,b);
			break;
		case '-':
			printf("Hieu %d %c %d = %d",a,toantu,b,tinhHieu());
			//tinhHieu();
			break;
		case '*':
			printf("Tich %d %c %d = %d",a,toantu,b,tinhTich(a,b));			
			break;
		case '/':
			tinhThuong(a,b,toantu);
			break;
		default:
			printf("Vui long nhap lai.");			
	}	
	//return 0;
}
