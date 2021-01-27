#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int i,carpim,n;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	for(i=1;i<n+1;i++)
	{
		carpim=carpim*i;
		
	}	
	printf("Sonuc:%d",carpim);
	
	
	
	return 0;
}
