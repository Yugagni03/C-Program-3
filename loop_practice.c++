#include<iostream>
using namespace std;
int main()
{
/*	int i , n;
	cout<<"enter the number:"<<endl;
	cin>>n;
	for(i=0;i<=10;i++){
		cout<<n<<'*'<<i<<'='<<n*i<<endl;
	}
	return 0;
*/

/*    int i, n,sum;
    cout<<"enter the range of nums:";
    cin>>n;
    for(i=0;i<=n;i++){
    sum=sum+i;
}
    cout<<"the sum of n natural num is:"<<sum;
    return 0;
*/

    int i,n,facto=1;
	cout<<"enter the number :";
	cin>>n;
	for(i=0;i<=n;i++){
	facto=facto*i;
}
cout<<"the factorial of n is :"<<facto;
    return 0;
	
}
