#include <stdio.h>
#include <stdlib.h>

//Hesap Makinesi yapiniz.(Fonksiyon kullanarak)



void sonuc(int one, int two,char a)
{
	
	switch(a)
	{
	
		case '+': printf("%d",one+two);break;
		case '-': printf("%d",one-two);break;
		case '*': printf("%d",one*two);break;
		case '/': printf("%d",one/two);break;
		default: printf("Hatali islem");
	}
}
int main()
{
	int sayi1,sayi2;
	char secim;
	
	
	printf("Islem operatoru giriniz:");
	scanf("%c",&secim);
	
	printf("Birinci sayi giriniz:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	sonuc(sayi1,sayi2,secim);
	
	return 0;
}
