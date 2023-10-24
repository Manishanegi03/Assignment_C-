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
  friend void operator - (Negation & N);
  friend void operator +(Negation & N);
  
  
};
void operator -( Negation & N)
{
	N.x=-N.x;
	N.y=-N.y;
	
}
void operator +(Negation & N2)
{
	N2.x=N2.x+10;
	N2.y=N2.y+ 10;
	
}
int main()
{
  Negation d1(7,5u);
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  -d1;
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  +d1;
  cout<<"x:"<<d1.x<<",y:"<<d1.y<<endl;
  return (0);
}