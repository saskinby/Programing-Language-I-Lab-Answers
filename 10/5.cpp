#include<stdio.h>

int main () {
	int i,k,n,c,t,a;
	for(i=1;i<=10;i++) {
		printf("%d'inci sayiyi giriniz: \n",i);
		scanf("%d",&n);
		if (n%2==1) {
			for(k=4;k<=n+3;k++) {
				if(n%k==0) {
					t = t +1;
				}
			}
			a = a + 1;
		}
		else {
			c = c +1;
		}
	}
	printf("tek sayi: %d \n",t);
	printf("cift sayi: %d \n",c);
	printf("asal sayi: %d \n",a);
}
