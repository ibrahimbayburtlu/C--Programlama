#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	int sayi,i,satir;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	i=0;
	satir=0;
	while(i<sayi)
	{
		if(i%17==0)
		{
			printf("%5d",i);
			satir++;
			if(satir%10==0)
			{
				printf("\n");
			}
		}
		i++;
	}
	return 0;
}
