#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breadth;
		int area(){
			return length*breadth;
		}
		int perimeter(){
			return 2*(length+breadth);
		}
};
int main()
{
	rectangle r1,r2;
	rectangle *ptr1, *ptr2;
	ptr1=&r1;
	ptr2=&r2;
	ptr1->length=10;
	ptr1->breadth=5;
	cout<<"the area is:"<<ptr1->area()<<endl;
	cout<<"the perimeter is:"<<ptr1->perimeter()<<endl;;
	ptr2->length=20;
	ptr2->	breadth=10;
	cout<<"the area of rec 2 is:"<<	ptr2->area()<<endl;;
	cout<<"the perimete of rec 2 is:"<<	ptr2->perimeter()<<endl;
	return 0;
}
