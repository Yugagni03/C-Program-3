#include<iostream>
int main()
{
	int a = 66;
	int b = 55;
	int *ptr1 =&a;
	int *ptr2 =&b;
	
	std::cout<<"the address of a is :"<<ptr1<<"\n";
	std::cout<<"the address of b is :"<<ptr2<<"\n";
	
	int sub= *ptr1 - *ptr2;
	
	std::cout<<"the substraction is :"<<sub<<"\n";
	
	return 0;
}
