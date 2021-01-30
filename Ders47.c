#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int a,b,h;
	
	printf("Lutfen a b ve h degerlerini giriniz\n");
	scanf("%d %d %d",&a,&b,&h);
	
	printf("Taban Alan=%d\n",a*b);
	printf("Yanal Alanlar toplami=%d\n",2*a*h+2*b*h);
	printf("Toplam Alan=%d\n",2*a*b+2*a*h+2*b*h);
	printf("Hacim=%d",a*b*h);
	
	
	
	return 0;
}
