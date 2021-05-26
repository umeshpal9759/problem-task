#include<iostream>
#include<iomanip>
using namespace std;
template<class t1,class t2>
class General{
	private:
		t1 a;
		t2 b;
	public:
		General(t1 a,t2 b){
			this->a=a;
			this->b=b;
		}void product(){
			cout<<setw(40)<<setprecision(2)<<setiosflags(ios::dec)<<"product of "<< a<<" and"<< b<<" is "<<a*b<<"\n\n";
		}
};int main(){
	General <int,double> r(2,4.3);
	r.product();
	General <double,double> s(2.45,3.3);
	s.product();
}
