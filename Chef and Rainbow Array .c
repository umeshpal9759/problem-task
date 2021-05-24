#include<stdio.h>
int main(){
	int z,b,*ar,i,n=19,j=0,valid,d=n/2;
	scanf("%d",&z);
	for(b=0;b<z;b++){ 
	valid=0;
    scanf("%d",&n);
    ar=malloc(n*sizeof(int));
     for(i=0;i<n;i++){
         scanf("%d",&ar[i]);
     }
    while(ar[j]){
        int a=n/2,b=a-j-1,c=a+1+j;
        if(ar[j]==ar[n-j]){
            valid=1;
        }
            valid=0;
            break;
    j++;
    if(j==a) break;
    }if(ar[j]+1!=ar[n/2]){
    	valid=0;
	}
    if(valid)
        printf("yes\n");
    else
        printf("no\n");
		
	}
}
