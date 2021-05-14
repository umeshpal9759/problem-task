#include<Stdio.h>
int fibb(int n){
	if(n==1)
		return 1;
	else if(n==2)
		return 2;
	else if(n==3)
		return 3;
	else
		return fibb(n-1)+fibb(n-2)+fibb(n-3);
}
int main(){
	int n,re;
	scanf("%d",&n);
	re=fibb(n);
	printf("%d",re);
}
