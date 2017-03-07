#include <iostream>
#include <time.h>
using namespace std;

inline void interschimb_inline(int *a, int *b,int *c, int *d){
	int temp;
	temp= *a;
	*a= *b;
	*b=temp;
	temp= *c;
	*c=*d;
	*d=temp;
}

void apel_interschimb(int *a, int *b,int *c, int *d){
	int temp;
	temp= *a;
	*a= *b;
	*b=temp;
	temp= *c;
	*c=*d;
	*d=temp;
}

void main(void){
	clock_t start,stop;
	long int i;
	int a=1,b=2,c=3,d=4;
	start = clock();
	for(i=0;i<300000L;i++){
		interschimb_inline(&a,&b,&c,&d);
	}
	stop = clock();
	cout << "Durata pentru inline: " << stop-start;
	start=clock();
	for(i=0;i<300000L;i++)
		apel_interschimb(&a,&b,&c,&d);
	stop=clock();
	cout << "Durata pentru functia apelata" << stop-start;

	system("pause");
}