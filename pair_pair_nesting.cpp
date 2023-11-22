#include <iostream>
using namespace std;
int main()
{
    pair<pair<int,int>, pair<int,int>> pp;
    pp = make_pair(make_pair(2,6),make_pair(9,3));
    cout<<"First Pair : "<<pp.first.first<<" "<<pp.first.second<<endl;
    cout<<"Second Pair : "<<pp.second.first<<" "<<pp.second.second<<endl;
 return (0);
}