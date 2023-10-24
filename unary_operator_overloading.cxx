#include<iostream>
using namespace std;
 
class Negation
{
	public:
	int x,y;
	Negation(int a ,int b)
	{
		x=a;
		cout<<"x:"<<x<<endl;
	}
	//overload -operator
	void operator-()
	{
		x=++x;
		cout<<"After performing unary operator "<<endl;
		cout<<"x:"<<x<<endl;
	}
};
int main()
{
	Negation d1(7,10);
	-d1;
	return (0);
}
	

	
	
	