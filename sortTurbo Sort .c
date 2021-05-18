#include<stdio.h>
int main(){
	int *ar,i,j,n;
	scanf("%d",&n);
	ar=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(ar[i]>ar[j]){
				ar[i]=(ar[i]+ar[j])-(ar[j]=ar[i]);
		}
			
		}
	}
		for(i=0;i<n;i++){
		printf("%d\n",ar[i]);
}
}
