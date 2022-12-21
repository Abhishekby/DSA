#include<iostream>
#include<vector>
using namespace std;
vector <string> fizzbuzz(int n){
    vector <string> arr;
    for(int i=1;i<=n;i++)
    {
        if(i%15==0)
            arr.push_back("FizzBuzz");
        else if(i%3==0)
            arr.push_back("Fizz");
        else if(i%5==0)
            arr.push_back("Buzz");
        else
            arr.push_back(to_string(i));
    }
    return arr;
}
int main(){
    vector<string> output=fizzbuzz(10);
    for(string x: output)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}
