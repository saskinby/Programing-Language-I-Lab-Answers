#include<stdio.h>

int main() {
	int n,A[n],t,et=0,c,i=0;
    printf("dizinin elman sayisini giriniz:\n");
    scanf("%d",&n);
	for (i;i<n;i++) {
		printf("A[%d]:\n",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++) {
		t= et + A[i];
		et = t;
	}
	printf("dizi elemanlarýnýn toplamý: %d",t);
	
}
