#include <stdio.h>
#include <stdlib.h>


int main() 
{
	char can[]="Benim Ad�m CAN BOZ";
	char canan[100]="";
	
	strncpy(canan,can,7);
	printf("%s",canan);
	
	
	return 0;
}
