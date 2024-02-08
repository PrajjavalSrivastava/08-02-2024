#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    vector<vector<int>>intervals = {{1,3}, {2,4}, {6,8}, {9,10}};
    sort(intervals.begin(), intervals.end());
    int n = intervals.size();
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}