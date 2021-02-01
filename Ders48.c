#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,b,c;
	int min,max;
	
	
	printf("Lutfen 3 adet sayi giriniz:");
	scanf("%d %d %d",&a,&b,&c);
	
	
	max=a;
	
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	printf("Maximum degerimiz:%d\n",max);
	
	min=a;
	
	if(b<min)
	{
		min=b;
	}
	if(c<min)
	{
		min=c;
	}
	printf("Minimum degerimiz:%d\n",min);
	
	
	
	
	
	return 0;
}
