#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<int>v = {1,6,5,9,3,7,2};
    cout<<"First Display"<<endl;
    for(auto i : v)
        cout<<v[i]<<" ";
        
    cout<<"Second Display"<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    sort(v.begin(), v.end());
    cout<<"After sort"<<endl;
    for(auto i : v)
        cout<<v[i]<<" ";
    cout<<"After sort 2nd display: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    return 0;
}