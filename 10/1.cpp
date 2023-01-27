#include<stdio.h>

int main () {
	int a,i;
	printf("Lutfen sayiyi giriniz\n");
	scanf("%d",&a);
	for(i=1;i<=a+1;i=i+1) {
		if (a%i==0) {
		    printf("%d bolunur\n",i);
	    }
	}
	
}
