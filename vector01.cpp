#include<iostream>
#include<vector>
using namespace std;

{
    vector<int> v;
    int n;
    cout<<"Enter vector size : " ;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<endl<<"Enter element : " ;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" " ;
    }
return (0);
}