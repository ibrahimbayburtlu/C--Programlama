#include <stdio.h>
#include <stdlib.h>

//D��ar�dan girilen n adet say�n�n aritmetik say�n�n aritmetik ortalamas�n� bulan c program� yaz�n�z(Fonksiyon kullanarak)

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
