#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main(){
unordered_set <int> s;
int n;
cin>>n;
vector <int> arr;
for(int i=0;i<n;i++)
{
    int temp;cin>>temp;
    arr.push_back(temp);
    s.insert(temp);
}
vector<int> heads;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(s.find(arr[i]-1) == s.end()){
        heads.push_back(arr[i]);
    }
}
for(int x=0;x<heads.size();x++){
    cout<<heads[x]<<" ";
}
cout<<endl;
}
