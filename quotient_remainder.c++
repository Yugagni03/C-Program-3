#include<iostream>
int main()
{
	int   quotient , remainder , divisor , dividend;
	std::cout<<"enter the dividend :";
	std:: cin>>dividend;
	
	std::cout<<"enter the divisor :";
	std:: cin>>divisor;
	
	quotient=dividend/divisor;
	remainder=dividend%divisor;
	
	std::cout<<quotient<<"\n";
	std::cout<<remainder<<"\n";
	return 0;
}
