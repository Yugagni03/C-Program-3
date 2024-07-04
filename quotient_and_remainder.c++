#include<iostream>
using namespace std;
int main()
{
	int num1 , num2 , q , r;
	cout<<"enter 1st num :";
	cin>>num1;
	cout<<"enter second num :";
	cin>>num2;
	q=num1/num2;
	r=num1%num2;
	cout<<"the quotient of those nums :"<<q<<endl;
	cout<<"the remainder of those nums :"<<r<<endl;
	return 0;
}
