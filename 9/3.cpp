#include<stdio.h>

int main () {
	int ke,pe,m,h,v;
	float g=9.8;
	printf("Lutfen yukseklik, kutle ve hizi giriniz\n");
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&v);
	pe = m*g*h;
	ke = (m*v*v)/2;
	printf("Potansiyel Enerji: %d\n",pe);
	printf("Kinetik Enerji: %d",ke);
}
