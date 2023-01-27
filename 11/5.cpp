#include<stdio.h>

int main () {
	int n,a[n],max=0,min,b,i,c;
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("\nA dizisinin A[%d] elemanini giriniz:",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++) {
		if (a[i]>max) max = a[i];
		if (a[i]<min) min = a[i];
	}
	printf("\nmax deger:%d",max);
	printf("\nmin deger:%d",min);
}
