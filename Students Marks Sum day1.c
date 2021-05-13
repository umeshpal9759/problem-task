#include<stdio.h>
int main(){
	char ch;
	int ar[1000],i,b=0,g=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}scanf(" %c",&ch);
	if(ch=='b'){
		for(i=0;i<n;i++){
			if(i%2==0){
				b=b+ar[i];
			}
		}printf("%d",b);
	}else if(ch=='g'){
		for(i=0;i<n;i++){
			if(i%2!=0){
				g=g+ar[i];
			}
		}printf("%d",g);
	}
}
