#include<iostream>
int main()
{
	int a = 66;
	int b = 55;
	int *ptr1 =&a;
	int *ptr2 =&b;
	
	std::cout<<"the address of a is :"<<ptr1<<"\n";
	std::cout<<"the address of b is :"<<ptr2<<"\n";
	
	int sum= *ptr1 + *ptr2;
	
	std::cout<<"the sum is :"<<sum<<"\n";
	
	return 0;
}
