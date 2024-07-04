#include<iostream>
int main()
{
	int val = 90;
	int *ptr= &val;
	
	std::cout<<"the address of val is :"<<&val<<"\n";
	std::cout<<"the address of val is:"<<ptr<<"\n";
	
	std::cout<<"the value is :"<<val<<"\n";
	std::cout<<"the value is :"<<*ptr<<"\n";
	
	return 0;
}
