#include<iostream>
using namespace std;
int main()
{
	int m , n , r , rev=0;
	cout<<"enter the num :";
	cin>>n;
	m=n;
	while(n>0){
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(rev==m){
		cout<<"PALLINDROME !!";
	}
	else{
		cout<<"NOT PALLINDROME !!";
	}
	return 0;
}
