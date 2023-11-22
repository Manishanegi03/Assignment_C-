#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>> v;
    int n;
    cout<<"enter vector size : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int f,s;
        cout<<"enter first element : ";
        cin>>f;
        cout<<"enter second element : ";
        cin>>s;
        v.push_back(make_pair(f,s));
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
   return (0);
}