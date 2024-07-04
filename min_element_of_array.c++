#include<iostream>
using namespace std;
int main()
{
	int i,min;
	int arr[5]={1,9,7,5,4};
	for(i=0;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"the minimum element in an array is :"<<min<<endl;
	return 0;
}
