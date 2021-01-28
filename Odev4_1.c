#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int array[3];
	int i,j,temp;

 //Burada isterseniz dizinin elemanlarýný scanf fonksiyonu ile kullanýcýya seçtirebilirsiniz.
	for(i=0;i<3;i++){
    printf("Sayi giriniz: ");
    scanf("%d",&array[i]);
}

	for (i=0;i<3;i++) {
    	for(j=0;j<3;j++) {
        	if(array[i]>array[j]) {
            	temp=array[i];
            	array[i]=array[j];
            	array[j]=temp;
        	}
    	}
	}
	printf("Dizi\n");
	printf(".......\n");
	for(i=0;i<3;i++){
		printf("%d\n",array[i]);
}
	return 0;
}
