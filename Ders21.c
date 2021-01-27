#include <stdio.h>
#include <stdlib.h>




int main() 
{	
	/*
	FOR KULLANIMI
	
	
	for (initialisation;condition;action)
	{
		statements
	}
	
	WHÝLE KULLANIMI
	
	initialisation;
	while(condition);
	while(condition)
	{
		statements
		action
	}
	
	*/
	
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",i+1);
	}
	
	i=0;
	while(i<10)
	{
		
		printf("%d\n",i+1);
		i+=1;
	}
	
	
		
	return 0;
}
