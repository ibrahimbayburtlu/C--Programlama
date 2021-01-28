#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
	
	char can[]={'c','a','n','a','n','\0'};	// 1.Tanýmlama 
	
	char dizim[]="canan";	// 2.Tanýmlama
	
	char kullanici[100];
	
	
	
	printf("%s\n",dizim);
	
	printf("Lutfen bir karakter dizisi girelim\n");
	scanf("%s",&kullanici);
	printf("%s",kullanici);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
