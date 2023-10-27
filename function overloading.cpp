#include<iostream.h>
#include<conio.h>
using namespace std;
 class calculator
 {
 	public: 
 	int a,b ;
 	void add(int a, int b)
 	{
 		cout<<(a+b)<<endl;
 		
 	}
 	//functions to add two doubles 
 	void add(double a, double b)
 	{
 		cout<<(a+b)<<endl;
 	}
 	
 };
int main()
{
  calculator cd;
  cd.add(8,3);	
  cd.add(5.4,8.9);
getch();
return(0);
}
