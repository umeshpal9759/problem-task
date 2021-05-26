#include<iostream> 
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
			cout<<a*b<<endl;
		}
};int main(){
	General <int,double> r(23,423.3);
	r.product();
	General <long,double> s(23324,423.3);
	s.product();
}
