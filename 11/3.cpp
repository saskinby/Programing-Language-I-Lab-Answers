#include<stdio.h>

int main () 
{
	int n,a[n],ort,i,t,et=0;
	printf("Dizinin eleman sayisini giriniz: \n");
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		printf("A[%d]:",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) 
	{
		t = et + a[i];
		et = t;
	}
	ort = t/n;
	for(i=0;i<n;i++) 
	{
		if (a[i]>ort) printf("\nA[%d] ortalamadan buyuktur\n",i);
	}
}
