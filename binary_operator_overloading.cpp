#include<iostream>
using namespace std;
 class add
 {
 	private:
 	int value;
 	public:
 	add (int val)
 	{
 		value= val;
 	}
 	//overload the + operator
 	add operator+(add& a)
 	{
 		int sm= value + a.value;
 		cout<<"Addition="<<sm<<endl;
 	}
 };
 int main()
 { 
  add num1(8);
  add num2(5);
  add result= num1+ num2;
  return 0;
 }
