#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{
	int sonuc;
	char can[15]="abcdef";
	char canan[15]="ABCDEF";
	
	sonuc=strcmp(can,canan);
	
	printf("%d\n",sonuc);
	
	if(sonuc<0)
	{
		printf("Can Canandan daha kucuktur.");
	}
	else if(sonuc>0)
	{
		printf("Can Canandan daha buyuktur..");		
	}
	else
	{
		printf("Can ve Canan birbirine esittir.");
	}
	return 0;
}
