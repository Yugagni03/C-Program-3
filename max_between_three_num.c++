    // Write a program to find the largest number among three numb
#include<iostream>
int main()
{
	int num1 , num2 , num3 ;
	std::cout<<"enter num1 :";
	std::cin>>num1;
	
	std::cout<<"enter num2 :";
	std::cin>>num2;
	
	std::cout<<"enter num3 :";
	std::cin>>num3;
	
	if(num1>num2 && num1>num3)
	{
		std::cout<<"num1 is max";
	}
	else if(num2>num1 && num2>num3)
	{
		std::cout<<"num2 is max";
	}
	else
	{
	std::cout<<"num3 is max";
}
return 0;
}
