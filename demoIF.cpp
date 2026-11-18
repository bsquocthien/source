#include<stdio.h>
int main()
{
	int diem;
	printf("Vui long nhap diem: ");
	scanf("%d",&diem);
	if(diem >=9)
	{
		printf("xuat sac");
	}
	else 
	{
			if(diem < 9 && diem >=8)
			{
				printf("Gioi");
			}
			else 
			{
					if(diem < 8 && diem >=7)
					{
						printf("Kha");
					}
					else 
					{
							if(diem < 7 && diem >=5)
							{
								printf("TB");
							}
							else 
							{
									if(diem < 5 && diem >=3)
									{
										printf("TB");
									}
									else 
									{
										printf("Kem");
									}	// end of Yeu
							}	// end of TB
					}	// end of Kha
			}	// end of Gioi			
	}	// end of Xuat sac

}
