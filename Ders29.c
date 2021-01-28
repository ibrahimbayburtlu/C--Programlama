#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
/*	int can[5]={1,3,5,7,9};
	printf("%d\n",can[0]);
	printf("%d\n",can[1]);	
	printf("%d\n",can[2]);	
	printf("%d\n",can[3]);	
	printf("%d\n",can[4]);	
*/
	int can[10];
	int i;
	
	for(i=0;i<=10;i++)
	{
		can[i]=i*2;
		printf("%d-",can[i]);
	}
	
	return 0;
}
