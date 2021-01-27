#include <stdio.h>
#include <stdlib.h>





int main() 
{
	
	int a;
	int b;
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&a);
	printf("Lutfen bir sayi giriniz:\n");
	scanf("%d",&b);
	printf("Sayi toplamim:%d\n",a+b);
	printf("Sayi carpimi:%d\n",a*b);
	printf("Sayi farki:%d\n",a-b);
	printf("Sayi bolumu %.2f",(float)a/b);
	
	
	
	return 0;
}
