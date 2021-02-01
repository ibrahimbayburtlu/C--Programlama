#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	int sayi,i;
	int toplam=0;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	for(i=1;i<sayi;i++)
	{
		toplam=toplam+i;
		printf("%d + ",i);
	}
	printf(" %d =Toplam:%d",sayi,toplam+sayi);
	return 0;
}
