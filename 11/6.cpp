#include<stdio.h>

int main() {
	int n,a[n],b[n],i,min,g=800,j;
	printf("dizinin eleman sayisini giriniz:");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("\nA[%d]",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
    for(i=0;i<n;i++) {
    	for(j=0;j<n-i;j++) {
    		if(a[i+j]<min) {
    			min=a[i+j];
			}
		}
		b[i]=min;
		min=a[i+1];
	}
    for(i=0;i<n;i++) {
    	printf("\nsiralama:%d",b[i]);
	}
}
