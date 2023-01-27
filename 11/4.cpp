#include<stdio.h>

int main () 
{
	int o,n,a[n],c[n],m=0,i;
	printf("Dizinin eleman sayisini giriniz:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("\nA[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--) {
		c[m]=a[i];
		m++;
	}
    for(i=0;i<n;i++) {
    	printf("\nC[%d]:%d",i,c[i]);
	}
	return 0;
}
