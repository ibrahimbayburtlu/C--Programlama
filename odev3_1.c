#include <stdio.h>
#include <stdlib.h>

/*
	Bir otoparkta tabelada ��yle yazmaktad�r.Giren ara�lardan bekleme saatlerine g�re �deyecekleri fiyat listesi :
	0-4 saat 10 lira
	5-8 saat 12 lira
	9-12 saat 15 lira
	12 saat �st� 20 lira
�eklinde bir �cretlendirme vard�r.Girilen sonu�lara g�re fiyat ��kt�s�n� veren program� kodlay��n�z.

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
