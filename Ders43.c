#include <stdio.h>
#include <stdlib.h>


int tekmiciftmi(int can)
{
	
	if(can%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}
int main() 
{
	
	int sayi,sonuc;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	sonuc=tekmiciftmi(sayi);
	
	if(sonuc==1)
	{
		printf("Sayi cift");
	}
	else
	{
		printf("Sayimiz tektir.");
	}
	
	return 0;
}
