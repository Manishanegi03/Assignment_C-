#include <iostream>
using namespace std;
int main()  
{
    pair <int,int> p1;
    pair <int,float> p2;
    pair <double,double> p3;
    pair <float,int> p4;
    p1 = make_pair(5,7); 
    cout<<"-----First Pair-----"<<endl;
    cout<<"First value : "<<p1.first<<" , second value : "<<p1.second<<endl;
    p2 = {6,5.9}; 
    cout<<"-------Second Pair------"<<endl;
    cout<<"First value :"<<p2.first<<",Second value :"<<p2.second<<endl;
return(0);
}