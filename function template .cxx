#include<iostream>
using namespace std;
template<class T1>
void fun(T1 val)
{
	cout<<"Result:"<<val<<endl;
}
int main()
{
	fun('C');
	fun("C++");
	fun(57);
	fun(3.6);
return(0);
}
