#include<stdio.h>

int main () {
	
	int a,b,c,alan,u;
	printf("Lutfen ucgenin kenar uzunluklarini sirayla giriniz \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	u = (a+b+c)/2;
	alan = (u*(u-a)*(u-b)*(u-c))^(1/2);
	printf("Ucgenin alani: %d",alan);
	
	
	
}
