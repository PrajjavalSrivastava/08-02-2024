#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    // vector<int>v1 = {3,5,7,9,2,8};
    // for(int i=0; i<v1.size(); i++){
    //     cout<<i<<" ";
    // }
    
    vector<vector<int>>v2 = {{1,3},{2,4},{6,8},{9,10}};
    for(int i=0; i<v2.size(); i++){
        for(
            auto it = v2[i].begin();
            it!=v2[i].end(); it++){
            cout<<*it<<" ";
        }
    }

    return 0;
}