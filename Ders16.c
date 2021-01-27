#include <stdio.h>
#include <stdlib.h>

// ÝÇ ÝÇE ÝF KULLANIMI

int main() 
{
	int a,b;
	printf("A sayisini giriniz:");
	scanf("%d",&a);
	printf("B sayisini giriniz:");
	scanf("%d",&b);
	
	if(a%2==1)
	{
		if(b%2==1)
		{
			printf("A ve B sayisi tektir.");
		}
		else
		{
			printf("A sayisi tek B sayisi ciftir.");
		}
		
	}
	else
	{
		if(b%2==1)
		{
			printf("A sayisi cift ve B sayisi tek");
		}
		else
		{
			printf("A sayisi cift  B sayisi cift.");
		}
		
	}
		
	
	
	return 0;
}
