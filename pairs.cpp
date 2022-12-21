#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr;
    int n,tar;
    cin>>n;
    cin>>tar;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    int a=0;
    int b=arr.size()-1;
    cout<<endl;
    int count=0;
    while(a<b){
    if(arr[a]+arr[b]==tar){      
           count++; 
        a++;
        b--;
    }
    else if(arr[a]+arr[b]<tar)
          a++;
    else
          b--;
    }
cout<< count<<endl;
return 0;
}