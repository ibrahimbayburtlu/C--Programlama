#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	int a,b,c,x;
	int sonuc;
	
	printf("Lutfen a b c ve x degerlerini giriniz\n");
	scanf("%d %d %d %d",&a,&b,&c,&x);
	
	sonuc=a*x*x+b*x+c;	
	
	printf("ax^2 + bx+c degeri=%d",sonuc);
	
	
	return 0;
}
