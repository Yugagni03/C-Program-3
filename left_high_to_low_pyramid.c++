#include<iostream>
int main()
{
	int i, j, n;
	std::cout<<"enter the range";
	std::cin>>n;
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
		}std::cout<<"\n";
	}
	return 0;
}
