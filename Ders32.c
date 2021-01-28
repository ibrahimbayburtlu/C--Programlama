#include <stdio.h>
#include <stdlib.h>


int main() 
{
/*
	int mat[10][10];
	int i,j;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			{
				mat[i][j]=1;
			}
			else
			{
				mat[i][j]=0;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
*/


	int dizi1[3][4]={{1,2,5,6},{5,4,8,6},{7,1,6,5}};
	int dizi2[3][4]={{1,0,5,7},{1,4,4,6},{3,7,3,1}};
	int dizi3[3][4];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			dizi3[i][j]=dizi1[i][j]+dizi2[i][j];
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",dizi3[i][j]);
		}
		printf("\n");
	}














	return 0;
}
