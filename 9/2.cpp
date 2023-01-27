#include<stdio.h>
#include<math.h>

int main () {
	
	int p,k,a,b,c,d,h;
	printf("p ve k degerlerini sirayla giriniz\n");
	scanf("%d",&p);
	scanf("%d",&k);
	h = p*k;
	h = sqrt(h);
	b = (p+k)*k;
	b = sqrt(b);
	c = (p+k)*p;
	c = sqrt(c);
	printf("h: %d \n",h);
	printf("b: %d \n",b);
	printf("c: %d \n",c);
	
}
