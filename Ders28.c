#include <stdio.h>
#include <stdlib.h>
int main() 
{
	
	char op;
	float a,b;
	
	printf("Lutfen operator giriniz:\n");
	scanf("%c",op);
	
	printf("Lutfen 2 adet sayi giriniz:");
	scanf("%f %f",&a,&b);
	
	switch(op)
	{
		case '+':printf("%f+%f=%f",a,b,a+b);break;
		case '-':printf("%f-%f=%f",a,b,a-b);break;
		case '*':printf("%f*%f=%f",a,b,a*b);break;
		case '/':printf("%f/%f=%f",a,b,a/b);break;
		default:printf("Hatalý giris");
	}
	

	
	return 0;
}
