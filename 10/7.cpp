#include<stdio.h>

int main () {
	int n,b,i,be=0;
	printf("sayiyi giriniz: \n");
	scanf("%d",&n);
	for(i=1;i<n;i++) {
		if (n%i==0) {
			b = be+i;
			be = b;
		}
	}
	if (b==n) {
		printf("Mukemmel sayidir");
	}
	else {
		printf("Mukemmel sayi degildir");
	}
}
