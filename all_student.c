#include<Stdio.h>
#include<process.h>
struct student{
	int roll_no;
	char name[10],course[10],fees[10];
};  struct student s;
FILE *fb;
 void add_record(){
 	system("cls");
	printf("Roll_no : ");scanf("%d",&s.roll_no);
	printf("Name : ");fflush(stdin);gets(s.name);
	printf("Course : ");fflush(stdin);gets(s.course);
	printf("Fess : ");fflush(stdin);gets(s.fees);
	fseek(fb,0,SEEK_END);
	fwrite(&s,sizeof(s),1,fb);
	printf("\nrecord saved... press any key to contiune ....");
	getch();
}void show_record(){
	system("cls");
	fseek(fb,0,SEEK_SET);
	printf("%-20s %-20s %-20s %-10s \n\n","Roll no","Name","Course","fess");
	while(fread(&s,sizeof(s),1,fb)){
		printf("%-20d %-20s %-20s %-10s \n",s.roll_no,s.name,s.course,s.fees);
	}
	printf("\n\n\n press any key to continue ...");   
	getch();
}void search_record(){
	int r,found=0;
	system("cls");
	printf("find roll no :");scanf("%d",&r);
	fseek(fb,0,SEEK_SET);
	while(fread(&s,sizeof(s),1,fb)){
		if(s.roll_no==r){
			found=1;
			break;
		}
	}if(found){
		printf("Record found as %s\n",s.name);
	}
	else{
		printf("not found");
	}
	printf("\n press any key to continue....");getch();
	
}void update_record(){
	int r ,found =0;
	system("cls");
	printf("found roll no :");
	scanf("%d%*c",&r);
	fseek(fb,0,SEEK_SET);
	while(fread(&s,sizeof(s),1,fb)){
		if(s.roll_no==r){
			found=1;
			break;
		}
	}if(found){
		printf("Old name is %s ,New name ",s.name);scanf("%[^\n]%*c",s.name);
		printf("Old course is %s ,New course : ",s.course);scanf("%[^\n]%*c",s.course);
		printf("old fees is %f ,New fees : ",s.fees);scanf("%[^\n]%*c",s.fees);
		
		fseek(fb,-sizeof(s),SEEK_CUR);
		fwrite(&s,sizeof(s),1,fb);
		printf("Record updated /n");
	}
	else {
		printf("Not found \n");
	}
	printf("\n press any key to continue...");getch();
}void delete_record(){
	int r,found=0;
	system("cls");
	printf("found rool no : ");
	scanf("%d%*c",&r);
	fseek(fb,0,SEEK_SET);
	while(fread(&s,sizeof(s),1,fb)){
		if(s.roll_no==r){
			found=1;
		}
	}
	if(found){
		FILE *temp=fopen("temp.dat","wb");
		rewind(fb);
		while(fread(&s,sizeof(s),1,fb)){
			if(s.roll_no!=r)
			{
				fwrite(&s,sizeof(s),1,temp);
			}
		}
		fclose(fb);
		fclose(temp);
		remove("all_student.dat");
		rename("temp.dat","all_student.dat");
		fb=fopen("all_student.dat","rb+");
		
		printf("Record Deleted \n");
	}else
		printf("not found\n ");
	printf("press any key to continue ........");getch();
}


int main(){
	int choice;
	fb=fopen("all_student.dat","rb+");
	if(fb==NULL)
		fb=fopen("all_student.dat","wb+");
	for(;;){
		system("cls");
		printf("1. Add record \n");
		printf("2. Show record \n");
		printf("3. Search record \n");
		printf("4. update record \n");
		printf("5. delete record \n");
		printf("6. Quit\n");
		printf("enter choice : ");
		scanf("%d%*c",&choice);
		switch(choice){
			case 1:add_record();break;
			case 2:show_record();break;
			case 3:search_record();break;
			case 4:update_record();break;
			case 5:delete_record();break;
			case 6:fclose(fb);exit(0);
			default:printf("Invalid choice.......press any key to coutinue ....");getch();
		}
	}
}
