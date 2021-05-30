#include<stdio.h>
int main(){
	char ch;
	ch=getchar();
	ch=tolower(ch);
	if(isalpha(ch)){
		if(ch=='a'|| ch=='e'||ch=='o'|| ch=='i'||ch=='u'){
			printf("Vowels");
		}else
			printf("Consonant");
	}
	
}
