#include <stdio.h>
#include <stdlib.h>


/*
1. Ekrana kendi isminizi yazacak bir program yazýn.
2.Programa ayrý satrýlarda, iki "printf  satiri daha ekleyerek,adresinizi
ve telefon numaranýzý da yazdýrýn
3.Bir program daha yazdýrýn.Bunun baþýnda "int yas" komutuyla bir tam sayi degiþkeni
yaratýn, sonra bu degiþkene kendi yaþýnýýz atayýn, ve bir printf komutuyla ekrana yaþýnýzý yazdýrýn.
*/

int main() 
{
	char name[20];
	int phone_number;
	char home_adress[100];
	int yas;
	
	printf("What is your name?\n");
	scanf("%s",&name);	
	
	printf("Hi %s\n",name);
	
	printf("What is your phone number?\n");
	scanf("%d",&phone_number);

	printf("What is your home adress?\n");
	scanf("%s",&home_adress); // Actually we use gets but we don't learn so you write without spaces
	
	printf("How old are you?\n");
	scanf("%d",&yas);
	
	printf(" Hi %s your phone number: %d and your home adress: %s",name,phone_number,home_adress);
	
	printf("I am %d years old",yas);
	
	
	
	return 0;
}
