#include<stdio.h>

int main ()
{
	int A,B,C;
	printf("A'yi giriniz \n");
	scanf("%d" ,&A);
	printf("B'yi giriniz \n");
	scanf("%d" ,&B);
	C=B , B=A , A=C;
	printf("A= %d \n",A);
	printf("B= %d \n",B);
	
    	
}
