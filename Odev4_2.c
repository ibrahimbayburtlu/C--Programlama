#include <stdio.h>
#include <stdlib.h>

// 5 elemanl� bir dizi kullan�c�dan al�n�z ve bunlar� hem s�rayla hem de ters s�rayla ekrana yazd�r�n�z.
int main() 
{
	
	int dizi[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Sayi giriniz:");
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",dizi[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",dizi[4-i]);
	}	
	return 0;
}
