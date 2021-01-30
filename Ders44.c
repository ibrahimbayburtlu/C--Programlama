#include <stdio.h>
#include <stdlib.h>


void kare(int *sonuc,int *can)
{
	*sonuc=*can**can;
}

int main() 
{
	
	int x=4,karesi;
	int sonucum;
	kare(&sonucum,&x);
	
	printf("Sonuc:%d",sonucum);
	
	return 0;
}
