#include<stdio.h>

int main ()
{
	int ogrencino,vize,final,ort,a,b;
	printf("ogrencino'yu giriniz\n");
	scanf("%d",&ogrencino);
	printf("vize notu giriniz\n");
	scanf("%d",&vize);
	printf("final notu giriniz\n");
	scanf("%d",&final);
	a = vize*4/10, b = final*6/10;
	ort = a + b;
	printf("Ogrenci no= %d \n",ogrencino);
	printf("ortalama= %d \n",ort);
	
	return 0;
}
