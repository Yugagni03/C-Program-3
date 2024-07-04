#include<iostream>
int main()
{
	int a;
	int *ptr= &a;
	
	std::cout<<"the address before increment :"<<ptr<<"\n";
	
	ptr++;
	
	std::cout<<"the address after increment :"<<ptr<<"\n";
	return 0;
}
