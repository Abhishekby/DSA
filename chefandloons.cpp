//wrong output and logic
#include<iostream>
using namespace std;
int solve();
int main(){
    int t;
    cin>>t;
    while(t--)
    cout<<solve()<<endl;;
}
int solve(){
        int r,g,b;
        cin>>r>>g>>b;
        int k;
        cin>>k;
        int same=0;
        int draws=0;
        while(same!=k)
        {
            
            if(k==1)
            return 1;
            if(r>0 and g>0 and b>0)
            {
            same++;
            draws+=3;
            
            }
            else if((r>0 and g>0 and b==0) or (r>0 and b>0 and g==0) or (r==0 and g>0 and b>0))
            {
                same++;
                draws+=2;
            }
            else if((r>0 and g==0 and b==0) or (r==0 and b>0 and g==0) or (r==0 and g>0 and b==0))
            {
                same++;
                draws++;
            }
            r--;
            g--;
            b--;

    }
    return draws;
}
