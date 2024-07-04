#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a , b , c , r;
	cout<<"enter the value of a :";
	cin>>a;
	
	cout<<"enter the value of b :";
	cin>>b;
	
	cout<<"enter the value of c :";
	cin>>c;
	
	r= (-b-sqrt(b*b-4*a*c)/(2*a) );
	
	cout<<"the result is :"<<r;
	return 0;
	
}
