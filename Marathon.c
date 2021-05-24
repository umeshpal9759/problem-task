//3
//1 1 1 2 3
//10 1 1 2 3
//10 3 1 2 3-- 10  km, 21 km and 42
#include<stdio.h>
int main(){
	int i,t,D,d,a,b,c,f;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	scanf("%d%d%d%d%d",&D,&d,&a,&b,&c);
	
		f=D*d;
		if(f>=10&&f<21)
			printf("%d",a);
		else if(f>=21&&f<42)
			printf("%d",b);
		else if(f>=42)
			printf("%d",c);
		else
			printf("%d",0);
	
	}
}
