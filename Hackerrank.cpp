//Variable Sized Arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,a,b,z,y;
    cin>>n>>q;
    vector<vector<int>>stuff;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        cin>>a;
        for(int j=0;j<a;j++)
        {
            cin>>b;
            temp.push_back(b);
        }
        stuff.push_back(temp);
        a=0;b=0;
    }
    for(int i=0;i<q;i++)
    {
    cin>>z>>y;
    cout<<stuff[z][y]<<endl;
    z=0;
    y=0;
    }
    return 0;
}
