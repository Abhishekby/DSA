#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a%2==0)
        {
            if(a-2==b || a+2==b ||a-1==b)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            if(a-2==b || a+2==b || a+1==b)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }

    }
     
}