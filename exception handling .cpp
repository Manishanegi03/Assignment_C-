#include<iostream>
using namespace std ;
int main()
{   
    int n,d,r;
    cout<<"Enter numinator="<<endl;
    cin>>n;
    
    cout<<" Enter denuminator="<<endl;
    cin>>d;
    try
    {  
    if(d==0)
    {  
    throw d;
    }
     r=n/d;
     cout<<"Result="<<r<<endl;
    } 
    catch(int exception)
    {  
    cout<<"Exception: Division by zero"<<endl;
    	}
    
    

}
