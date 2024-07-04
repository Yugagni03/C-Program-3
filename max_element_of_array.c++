#include<iostream>
using namespace std;
int main()
{
	int i,max;
	int arr[5]={1,9,7,5,4};
	for(i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"the maximum element in an array is :"<<max<<endl;
	return 0;
}
