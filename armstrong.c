#include<Stdio.h>
int main(){
	int n,a,b,c=0;
	scanf("%d",&n);
	b=n;
	while(n>0){
		a=n%10;
		n=n/10;
		c=c+(a*a*a);
		
	}if(c==b) printf("armstrong ");
	else printf("not armstrong "); 
	return 0;
	
}
