#include <stdio.h>
#include <stdlib.h>

// 5 elemanlý bir dizi kullanýcýdan alýnýz ve bunlarý hem sýrayla hem de ters sýrayla ekrana yazdýrýnýz.
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
