#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length;
		int breadth;
		public:
			 rectangle();
			 rectangle(int l , int b);
			 rectangle(rectangle &r);
			int setlength(int l);
			int setbreadth(int b);
			int getlength(){
				return length;
			}
			int getbreadth(){
				return breadth;
			}
			int area();
			int perimeter();
			bool issquare();
			~rectangle();			
};
int main()
{
	rectangle r1(10,10);
	cout<<"area is"<<r1.area();
	if(r1.issquare() ){
		cout<<"yes";
	}
	rectangle::rectangle(){
		length=1;
		breadth=1;
	}
	rectangle::rectangle(int l , int b){
		length=l;
		breadth=b;
	}
	rectangle::rectangle(rectangle &r){
		length=r.length;
		breadth=r.breadth
	}
	rectangle::setlength(int l){
		length=l;
	}
	rectangle::setbreadth(int b){
		breadth=b;
	}
	rectangle::area(){
		return length*breadth;
	}
	rectangle::perimeter(){
		return 2*(length+breadth);
	}
	rectangle::issquare(){
		return length==breadth;
	}
	rectangle::~rectangle(){
		cout<<"rectangle destroyed";
	}
	return 0;
}

