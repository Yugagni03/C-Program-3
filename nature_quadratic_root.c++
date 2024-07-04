#include<iostream>
using namespace std;
int main()
{
	int a , b , c ,dis ;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	cout<<"enter c :";
	cin>>c;
	dis=(b*b-a*c);
	if(dis==0){
		cout<<"REAL AND EQUAL ";
	}
	else if(dis>0){
		cout<<"REAL AND UNIQUE";
	}
	else if(dis<0){
		cout<<"IMAGINARY";
	}
	else{
		cout<<"invalid data";
	}
	return 0;
}
