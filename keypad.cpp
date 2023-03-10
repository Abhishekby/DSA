#include <bits/stdc++.h>
using namespace std;
int row[] = {0, 0, -1, 0, 1};
int col[] = {0, -1, 0, 1, 0};
int getCountUtil(char keypad[][3], int i, int j, int n)
{
    if (keypad == NULL || n <= 0)
        return 0;
 
    if (n == 1)
        return 1;
 
    int k=0, move=0, ro=0, co=0, totalCount = 0;
 
    for (move=0; move<5; move++)
    {
        ro = i + row[move];
        co = j + col[move];
        if (ro >= 0 && ro <= 3 && co >=0 && co <= 2 &&
           keypad[ro][co] != '*' && keypad[ro][co] != '#')
        {
            totalCount += getCountUtil(keypad, ro, co, n-1);
        }
    }
 
    return totalCount;
}
 

int getCount(char keypad[][3], int n)
{

    if (keypad == NULL || n <= 0)
        return 0;
    if (n == 1)
        return 10;
 
    int i=0, j=0, totalCount = 0;
    for (i=0; i<4; i++)  
    {
        for (j=0; j<3; j++)   
        {
           
            if (keypad[i][j] != '*' && keypad[i][j] != '#')
            {
                totalCount += getCountUtil(keypad, i, j, n);
            }
        }
    }
    return totalCount;
}
 

int main(int argc, char *argv[])
{
   char keypad[4][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};
    int a;
    cin>>a;
    if(a>5||a<1){
        cout<<"Invalid"<<endl;
    }else{
        cout<<getCount(keypad,a)<<endl;

    }
    return 0;
}