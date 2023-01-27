#include<stdio.h>

int main () {
	int n,t1,t2,t3,i,t1e=0,t2e=0,t3e=0;
	printf("sayiyi giriniz\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++) {
		t1 = t1e + i;
		t1e = t1;
	}
	printf("toplam1: %d \n",t1);
	for(i=0;i<=n;i++) {
		if(i%2==1) {
			t2 = t2e +i;
			t2e = t2;
		}
	}
	printf("toplam2: %d \n",t2);
	for(i=0;i<=n;i++) {
		if(i%2==0) {
			t3 = t3e +i;
			t3e = t3;
		}
	}
	printf("toplam3: %d \n",t3);
	
}
