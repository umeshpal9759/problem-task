#include<stdio.h>
#include<iostream>
using namespace std;
#include<string.h>
class book{
	int  bookno;double price;
	char title[100],author[100];
	public:
		book(int bookno,char *title,char *author,double price);
		book(int bookno,char *title );
		book(int bookno,char *title,char *author );
		void settitle(char *t);
		void setauthor(char *a);
		void setprice(int pr);
		int getprice();
		char *gettitle();
		char *getauthor();
		int getbookno();
		float dis(int price);
	
	};
		book::book(int bookno,char *title,char *author,double price){
			this->bookno=bookno;
			strcpy(this->title,title);
			strcpy(this->author,author);
			this->price=price;
		}
		book::book(int bookno,char *title ){
			this->bookno=bookno;
			strcpy(this->title,title);
			strcpy(this->author," ");
			this->price=0;
		}
		book::book(int bookno,char *title,char *author ){
			this->bookno=bookno;
			strcpy(this->title,title);
			strcpy(this->author,author);
			this->price=0;
		}void book::settitle(char *t){
			strcpy(this->title,t);
		}void book::setauthor(char *a){
			strcpy(this->author,a);
		}void book::setprice(int pr){
			this->price=pr;
		}int book::getprice(){
			return price;
		}char *book::gettitle(){
			return title;
		}char *book::getauthor(){
			return author;
		}int book::getbookno(){
			return bookno;
		 }float book::
		 dis(int price){ 
			if(price>=3000)
				return price=price*.30f;
			else if(price>=1000)
				return price=price*.20f;
			else 
				return price;
		}
int main(){
	book b1(123," math ","uemsh ",100);/* static instance creation */ 
	book *b=new book(23,"c programing" );   /*dynamic instance creation*/
	b->setauthor("pal");
	b->setprice(434);
	cout << b->getbookno()<<" , "<<b->gettitle()<<" , "<<b->getauthor()<<" , "<<b->dis(b->getprice())  <<endl;
 	cout <<b1.getbookno()<<" , "<<b1.gettitle()<<" , "<<b1.getauthor()<<" , "<<b1.dis(b1.getprice())<<endl;
 delete b;
}
