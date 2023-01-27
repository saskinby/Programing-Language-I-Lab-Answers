#include<stdio.h>

int main () 
{
	int n,a[n],ort,i=0,t,et=0;
	printf("dizinin eleman sayisini giriniz:\n");
	scanf("%d",&n);
	for(i;i<n;i++)
	{
		printf("A[%d]:\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t = et + a[i];
		et = t ;
	}
	ort = t/n;
	printf("dizi elemanlarinin oralamasi: %d",ort);
	
}
