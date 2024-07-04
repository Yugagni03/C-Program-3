  //C++ Program to Check Leap Year
#include<iostream>
int main()
{
	int year;
	std::cout<<"enter the year :";
	std::cin>>year;
	
	if(year%400==0)
	std::cout<<"LEAP YEAR ";
	else if(year%100==0)
	std::cout<<" not leap year";
	else if(year%4==0)
	std::cout<<"LEAP YEAR ";
	else
	std::cout<<"not leap year";
	
	return 0;
}
