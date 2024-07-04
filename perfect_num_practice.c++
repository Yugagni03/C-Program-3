 #include<iostream>
 using namespace std;
int main()

{
	int i,n,sum=0;
	cout<<"enter the num:";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n*2){
		cout<<"perfect num";
	}
	else{
		cout<<"not a perfect number";
	}
	return 0;
}
