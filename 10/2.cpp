#include<stdio.h>
#include<math.h>

int main () {
	int a,b,c,x1,x2,d;
	printf("katsayilari giriniz\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d = b*b-4*a*c;
	if (d<=0) {
		if (d==0) {
			x1=-b/(2*a);
			printf("tek koku vardir: %d\n",x1);
			return 0;
		}
		else {
			printf("reel koku yoktur\n");
			return 0;
		}
	}
	x1 = (-b + sqrt(d))/(2*a);
	x2 = (-b - sqrt(d))/(2*a);
	printf("2 koku vardir\n");
	printf("%d\n",x1);
	printf("%d\n",x2);
	
}
