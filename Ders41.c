#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	
	char can[100];
	char canan[100];
	int a;
	
	printf("Lutfen bir yazi giriniz:");
	gets(can);
	printf("Lutfen bir yazi giriniz:");
	gets(canan);
	
	printf("Birinci yazinin sonuna kac karakter eklemek istersiniz");
	scanf("%d ",&a);
	
	printf("Eklemeden once:%s",can);
	
	printf("\nBirlestirmeden sonra\n");
	strncat(can,canan,a);
	printf("%s",can);
	
	
	
	
	return 0;
}
