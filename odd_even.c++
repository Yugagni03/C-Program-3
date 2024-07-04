#include<iostream>
int odd_even(int num){
	if(num%2==0)
	{
		std::cout<<"EVEN";
	}
	else{
		std::cout<<"ODD";
	}
}
	int main()
	{
		int number;
		std::cout<<"enter the number to be checked :";
		std::cin>>number;
		odd_even(number);
		return 0;
	}

