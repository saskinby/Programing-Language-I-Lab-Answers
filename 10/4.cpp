#include<stdio.h>

int main () {
	int a,b,s,p;
	printf("islem numarasi giriniz\n");
	scanf("%d",&p);
	if(p>4) {
		printf("gecersiz islem nuamrasi \n");
		return 0;
	}
	if(p<1) {
		printf("gecersiz islem nuamrasi \n");
		return 0;
	}
	printf("sayilari giriniz:");
	scanf("%d",&a);
	scanf("%d",&b);
	if (p==1) {
		s = a + b;
		printf("sonuc: %d \n",s);
	}
	if (p==2) {
		s = a - b;
		printf("sonuc: %d \n",s);
	}
	if (p==3) {
		s = a*b;
		printf("sonuc: %d \n",s);
   }
   if (p==4) {
		s = a/b;
		printf("sonuc: %d \n",s);
   }
}
