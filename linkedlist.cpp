#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool check(int n)
    
{   cout<<"";
    set<int>st;
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        st.insert(c);
        n/=c;
        }
        else c++;
    }
 return st.size()==2;
}
 
int main() {
    int n,m;
    cin>>n>>m;
    vector< int> ans;
    for(int i=n;i<=m;i++)
    {
        if(check(i))
            ans.push_back(i);
    }
    if(ans.size()>0){
    
    }
    else
    {
        return -1;
    }
    
    return 0;
}