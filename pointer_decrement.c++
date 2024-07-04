#include<iostream>
int main()
{
	int a;
	int *ptr= &a;
	
	std::cout<<"the address before decrement :"<<ptr<<"\n";
	
	ptr--;
	
	std::cout<<"the address after decrement :"<<ptr<<"\n";
	return 0;
}
