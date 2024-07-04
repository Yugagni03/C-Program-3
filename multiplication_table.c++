#include<iostream>
int main()
{
	int i , n;
	std::cout<<"enter the num for whom you want the table :";
	std::cin>>n;
	
	for(i=1;i<=10;i++)
	{
		std::cout<<n<<"*"<<i<<"="<<n*i<<"\n";
	}
	return 0;
}
