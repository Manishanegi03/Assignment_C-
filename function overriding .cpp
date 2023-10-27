#include<iostream>
using namespace std;
class Base
{  
   public:
    void display()
    { 
    cout<<" This is the base class"<<endl;
    }
    
	
};
class Derived : public Base
{ 
   public: 
   void display()
   { 
   cout<< "This is the derived class"<<endl;
   }
	
};
int main()
{ 
   Base baseobject;
   Derived derivedobject;
   Base*Ptr=&derivedobject;
   baseobject.display();
   derivedobject.display();
   Ptr->display();
   return(0);
}
   
   
