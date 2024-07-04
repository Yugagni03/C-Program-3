#include<iostream>
using namespace std;
int main()
{
	int i,n,key,arr[n];
	cout<<"enter the size :";
	cin>>n;
	cout<<"enter the key :";
	cin>>key;
	cout<<"enter the elements :";
	cin>>arr[i];
	for(i=0;i<n;i++){
		if(key==arr[i]){
			cout<< i;
		}
	}
	return 0;
}
