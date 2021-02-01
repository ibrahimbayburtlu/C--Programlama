#include <stdio.h>
#include <stdlib.h>



int main() 
{
	
	int sayi;
	int birler_bas,onlar_bas,yuzler_bas;
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	birler_bas=sayi%10;
	onlar_bas=(sayi%100)/10;
	yuzler_bas=sayi/100;
	
	printf("Birler basamagi:%d\n",birler_bas);
	printf("Onlar basamagi:%d\n",onlar_bas);
	printf("Yuzler basamagi:%d\n",yuzler_bas);	
	
	
	
	
	
	return 0;
}
