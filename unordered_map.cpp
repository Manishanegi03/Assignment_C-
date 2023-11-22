#include <iostream>
#include <unordered_map>
using namespace std;
int main() 
{
    unordered_map<int,string> m;
     int n;
    cout<<"enter map size : ";
    cin>>n;
    cout<<"----insert values----"<<endl;
    for(int i=0;i<n;i++)
    {
        int key;
        string value;
        cout<<"enter key and value : ";
        cin>>key>>value;
        m.insert(make_pair(key,value));
    }
      for(auto i:m)
    {
     cout<<i.first<<" "<<i.second<<endl;
    }
return(0);
}