#include<iostream>
using namespace std;
 //function to add two integers 
int add(int a, int b)
{
	return(a+b);
}
//function to add two doubles 
double add(double a, double b)
{
	return(a+b);
}
int main()
{   
  // calls int add(int a, int b)
	int addition_int_values= add(7,8);
	//calls double add(double a, double b)
	double addition_double_values=add(3.5,7.4);
	 cout<<"Addition of int values:"<<addition_int_values<<endl;
	 cout<<"Addition of double values:"<<addition_double_values<<endl;
	  
	  return(0);
}
	 
