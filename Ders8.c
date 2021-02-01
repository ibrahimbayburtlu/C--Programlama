#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	int x=1; // Global
	{
		int x=2; //Local
		printf("%d",x);
	}
	return 0;
}

