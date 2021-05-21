#include<stdio.h>
int main(){
	int n,i,j,d=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c=c+1;
				 
			}
		}if(c==2){
			d++;
		}
}
	printf("%d",d);
}
