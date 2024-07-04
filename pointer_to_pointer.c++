#include<iostream>
int main()
{
	int value = 86;
	int *ptr=&value;
	int **ptr1=&ptr;
	
	std::cout<<"the address of value is :"<<ptr<<"\n";
	std::cout<<"the address of value is :"<<&value<<"\n";
	
	std::cout<<"the value is :"<<*ptr<<"\n";
	std::cout<<"the of value is :"<<value<<"\n";
	
	std::cout<<"the address of *ptr is :"<<ptr1<<"\n";
	std::cout<<"the address of *ptr is :"<<&ptr<<"\n";
	
	std::cout<<"the value of ptr1 is :"<<**ptr1<<"\n";
	
	return 0;
}
