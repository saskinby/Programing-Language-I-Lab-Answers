#include<stdio.h>

int main()
{
	int a,yaricap,cevre,alan;
	float pi = 3.14;
	printf("islem turu giriniz\n");
	scanf("%d",&a);
	printf("yaricapi giriniz\n");
    scanf("%d",&yaricap);
	if(a!=2 ) {
		if(a==1) {	
   	        cevre = 2*yaricap*pi;
   	        printf("cevre = %d\n",cevre);
        }
       else {
       	    printf("Yanlis islem turu\n");
	        return 0;
	    }	   
   }
   if (a==2) {
       alan=pi*yaricap*yaricap;
	   printf("alan= %d\n",alan);   	
    }

}
