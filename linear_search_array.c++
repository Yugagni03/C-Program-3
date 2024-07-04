#include<iostream>
int sum(int a , int b)
{
int c=a+b;
return c;
}
int main()
{
  int num1, num2;
  std::cout<<"enter the num1 :";
  std::cin>>num1;
  std::cout<<"enter the num2 :";
  std::cin>>num2;
  
  std::cout<<"the sum is : "<<sum(num1 , num2);
  return 0;	
}
