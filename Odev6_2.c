#include <stdio.h>
#include <stdlib.h>

//Dýþarýdan girilen n adet sayýnýn aritmetik sayýnýn aritmetik ortalamasýný bulan c programý yazýnýz(Fonksiyon kullanarak)

void ortalamam(a)
{
	int i;
	int sayi,toplam=0;
	
	for(i=0;i<a;i++)
	{
		printf("%d.Sayiyi giriniz:",i+1);
		scanf("%d",&sayi);
		toplam=toplam+sayi;
	}
	printf("ortalamam:%.2f",(float)toplam/a);
}
int main()
{
	int n;	
	printf("Kac sayi giriceksiniz:");
	scanf("%d",&n);
	ortalamam(n);
	return 0;
}
