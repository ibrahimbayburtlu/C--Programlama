#include <stdio.h>
#include <stdlib.h>

/*
Kendisi hari� b�t�n poztif tamsayi �arpanlar�n�n toplam� kendisine e�it olan say�lara
m�kemmel say� denir. �rnegin, 28 say�s�n�n kendisi hari� pozitif �arpanlar� toplam�
1+2+4+7+14=28 oldu�undan 28 say�s� m�kemmel bir say�d�r.Buna g�re klavyeden girilen
bir say�n�n m�kemmel say� olup olmad���n� s�ylenen C program� yaz�n�z.*/

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
