#include<stdio.h>
int main(){
	char ch;
 
	printf("enter the character :");
	ch=getchar();
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
		if(ch=='a'||ch=='i'||ch=='o'||ch=='e'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			printf("%c is vowels \n",ch);
		}else{
			printf("%c is consonant\n ",ch);
	}
	}
	else{
		printf("invalid character ");
	}
}
