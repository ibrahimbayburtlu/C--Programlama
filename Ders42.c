#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() 
{
/*	char dizi1[]="bonne";
	char dizi2[]="soiree";
	char sonuc[100]="";
	
	strcpy(sonuc,dizi1);
	strncpy(sonuc+3,dizi2,5);

	printf("%s",sonuc);
	
*/

	char can[100][100]={"bir","iki","uc","dort","bes"};
		
	printf("Dizinin dorduncu elemani:%s\n",can[3]);	
	printf("Dizimin dorduncu elamininin ucuncu karakteri: %c",can[3][2]);
	
	
	
	
	
	return 0;
}
