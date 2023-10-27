//virtual function
#include<iostream>
using namespace std;
//Base class
class Shape
{
	public:
	virtual void draw()
	{ 
	cout<<"Drawing a shape"<<endl;
	}
	
};
//derived class1
class Circle : public Shape
{ 
   public:
   
   void draw ()override
   {  
   cout<<"Draw a circle"<<endl;
   }
};
//derived class2
class Square : public Shape
{ 
   public:
   void draw() override
   { 
   cout<<" Draw a square"<<endl;
   }
};
int main()
{ 
//create object of base and derived classes
Shape shape;
Circle circle;
Square square;
// create pointers to base class objects 
Shape*shapePtr1= &shape;
Shape*shapePtr2=&circle;
Shape*shapePtr3=&square;
//call the draw()  function through base class pointers
shapePtr1->draw();
shapePtr2->draw();
shapePtr3->draw();
return(0);

}
