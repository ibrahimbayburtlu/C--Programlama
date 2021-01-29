#include <stdio.h>
#include <stdlib.h>

//N elemanlý bir dizideki elemanlarýn toplamýný bulan program
int main() 
{
	
	int dizi[100];
	int i,N,toplam=0;
	
	
	printf("Diziniz kac elemanli:");
	scanf("%d",&N);
	
	
	for(i=0;i<N;i++)
	{
		printf("Dizinin %d.elemanini giriniz:",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("Toplam:%d",toplam);
	return 0;
}
