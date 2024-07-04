 #include<iostream>
 using namespace std;
int main()

{
	int i,n,sum=0;
	cout<<"enter the num:";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0){
			sum++;
		}
	}
	if(sum==2){
		cout<<"prime num";
	}
	else{
		cout<<"not a prime num";
	}
	return 0;
}
