#include<iostream>
int main()
{
	int i , j , n;
	std::cout<<"enter the range :";
	std::cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
		}
			int space= 2*n-2*i;
	for(j=1;j<+space;j++)
	{
		std::cout<<" ";
	}
		for(j=1;j<=i;j++)
		{
			std::cout<<"*";
	
	}
	std::cout<<"\n";

}
return 0;
}
