#include<iostream>
#include<conio.h>
using namespace std;
 class Negation
 {
 	public: 
 	int x,y ;
 	Negation (int a, int b)
 	{
 		this->x=a;
 		this->y=b;
 		
 	}
 	
 	void operator-( )
 	{
 		x=-x;
 		y=-y;
 	}
 	void operator+()
 	{
 		x= x+10;
 		y=y+10;
 	}
 	
 };
int main()
{
  Negation d1(9,8);
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  -d1;
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  +d1;
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  return (0);
}
