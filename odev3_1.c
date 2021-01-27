#include <stdio.h>
#include <stdlib.h>

/*
	Bir otoparkta tabelada þöyle yazmaktadýr.Giren araçlardan bekleme saatlerine göre ödeyecekleri fiyat listesi :
	0-4 saat 10 lira
	5-8 saat 12 lira
	9-12 saat 15 lira
	12 saat üstü 20 lira
þeklinde bir ücretlendirme vardýr.Girilen sonuçlara göre fiyat çýktýsýný veren programý kodlayý±nýz.

*/


int main() 
{
	
	int saat;
	printf("Kac saat kaldiniz:");
	scanf("%d",&saat);	
	
	if(saat>=0 && saat<=4)
	{
		printf("Ucret:10 TL");
		
	}
	else if(saat<=8 && saat>=5)
	{
		printf("Ucret:12 TL");
	}
	else if(saat>=9 && saat<=12)
	{
		printf("Ucret:15 TL");
	}
	else if(saat>12)
	{
		printf("Ucret:20 TL");
	}

	return 0;
}
