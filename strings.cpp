#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')
          s.replace(i,1,"$");
    }
    cout<<s<<endl;
}