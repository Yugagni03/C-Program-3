#include<iostream>
using namespace std;
int main()
{
	int i, n , count=0;
	cout<<"enter the num :";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"PRIME NUMBER !!";
	}
	else{
		cout<<"NOT PRIME !!";
	}
	return 0;
}
