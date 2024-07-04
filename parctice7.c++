#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"enter the range of numbers: ";
	cin>>n;
	for(i=0;i<=n;i++){
		sum=sum+i;
	}
	cout<<"the sum is: "<<sum;
	return 0;
}
