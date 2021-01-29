#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	int sonuc;
	char can[15]="abcdef";
	char canan[15]="ABCDEF";
	
	sonuc=strncmp(can,canan,4); // ilk dört karakter kýyaslama...
	
	if(sonuc<0)
	{
		printf("Can Canandan daha kucuktur.");
	}
	else if(sonuc>0)
	{
		printf("Can Canandan daha buyuktur.");
	}
	else
	{
		printf("Ikiside birbirine esittir.");
	}
	
	return 0;
}
