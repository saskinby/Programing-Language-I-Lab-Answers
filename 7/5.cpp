#include<stdio.h>

int main () {
	int a,b,c,d,sayi,yuz,elli,yirmi,on;
	printf("Lutfen Parayý giriniz\n");
	scanf("%d",&sayi);
	if(sayi%10==0) 
	{
		a = sayi%100;
		yuz = (sayi-a)/100;
		b = a%50;
		elli = (a-b)/50;
		c = b%20;
		yirmi = (b-c)/20;
		d = c%10;
		on = (c-d)/10;
		printf("yuzluk: %d \n",yuz);
		printf("ellilik: %d \n",elli);
		printf("yirmilik: %d \n",yirmi);
		printf("onluk: %d \n",on);
	}
	else
	{
		printf("Lutfen 10'un kati bir sayi giriniz");
		return 0;
	}
	
}
