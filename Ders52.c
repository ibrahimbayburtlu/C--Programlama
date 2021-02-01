#include <stdio.h>
#include <stdlib.h>


int main() 
{
	
	float x;
	float sonuc;
	
	printf("x degerini girin:");
	scanf("%f",&x);
	
	sonuc=x*x*x+13*x*x+47*x+5;
	
	printf(">>f(%.3f)=%.3f",x,sonuc);
	
	
	
	
	
	
	return 0;
}
