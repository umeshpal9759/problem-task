#include<stdio.h>
int main(){
	char st[11];
	gets(st);
	int valid=1,i=0;
	while(st[i]){
		if(!isdigit(st[i])){
			valid=0;
		}
		i++;
	}if(i==10 && valid){
		printf("%s  is valid number",st);
	}else printf("it is not valid number");
}
