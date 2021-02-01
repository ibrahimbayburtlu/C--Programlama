#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,b;
	
	printf("Lutfen 2 adet sayi giriniz:\n");
	scanf("%d %d",&a,&b);
	
	if(a==b)
	{
		printf("2 sayi birbirine esittir.\n");
	}
	if(a!=b)
	{
		printf("iki sayi esit degildir.\n");
	}
	if(a<b)
	{
		printf("A degerim b den kucuktur.\n");
	}
	if(a>b)
	{
		printf("A degerim b den buyuktur.\n");
	}
	if(a%b==0)
	{
		printf("A B nin katidir.");
	}
	else
	{
		printf("A B\'nin kati degildir.");
	}
	

	
	return 0;
}
