#include <stdio.h>
#include <stdlib.h>

/*
Kendisi hariç bütün poztif tamsayi çarpanlarýnýn toplamý kendisine eþit olan sayýlara
mükemmel sayý denir. Örnegin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý toplamý
1+2+4+7+14=28 olduðundan 28 sayýsý mükemmel bir sayýdýr.Buna göre klavyeden girilen
bir sayýnýn mükemmel sayý olup olmadýðýný söylenen C programý yazýnýz.*/

int main()
{
	int sayi,i,toplam=0;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
	}	
	
	if(toplam==sayi)
	{
		printf("Mukemmel sayi");
	}
	else
	{
		printf("Mukemmel sayi degil.");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
