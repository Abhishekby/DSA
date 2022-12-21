#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> split(string &text, char del) {
    vector<string> res;
    size_t start = 0, end = 0;
    while ((end = text.find(del, start)) != string::npos) {
        if (end != start) {
             res.push_back(text.substr(start, end - start));
        }
        start = end + 1;
    }
    if (end != start) {
        res.push_back(text.substr(start));
    }
    return res;
}

vector<string> res;
void f(vector<string> v, vector<string> w, int x0=-1, int y0=-1, bool q=true, int ind0=-1) {
    if (ind0>=0) {
        if (hor0) for (int i=0;i<w[ind0].size();i++) v[x0][y0+i]=w[ind0][i];
        else for (int i=0;i<w[ind0].size();i++) v[x0+i][y0]=w[ind0][i];
        w.erase(w.begin()+ind0);
    }
    if (res.size()>0) return;
    if (w.size()==0) {res=v; return;}
    
    int x, y;
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (v[i][j]!='-') continue;
            x=i; y=j;
        }
    }
    string hor="";
    int y1=y; while ((y1>0)&& (v[x][y1-1]!='+')) y1--;
    int y2=y; while ((y2<9) && (v[x][y2+1]!='+')) y2++;
    for (int i=y1;i<=y2;i++) hor+=v[x][i];
    for (int i=0;i<w.size();i++) {
        if (w[i].size()!=hor.size()) continue;
        bool b=true;
        for (int j=0;j<hor.size();j++) {
            if ((hor[j]!='-') && (hor[j]!=w[i][j])) {b=false; break;}
        }
        if (b) f(v, w, x, y1, true, i);
        if (res.size()>0) return;
        if (w.size()==0) {res=v; return;}
    }
    string ver="";
    int x1=x; while ((x1>0)&& (v[x1-1][y]!='+')) x1--;
    int x2=x; while ((x2<9) && (v[x2+1][y]!='+')) x2++;
    for (int i=x1;i<=x2;i++) ver+=v[i][y];
    for (int i=0;i<w.size();i++) {
        if (w[i].size()!=ver.size()) continue;
        bool b=true;
        for (int j=0;j<ver.size();j++) {
            if ((ver[j]!='-') && (ver[j]!=w[i][j])) {b=false; break;}
        }
        if (b) f(v, w, x1, y, false, i);
        if (res.size()>0) return;
        if (w.size()==0) {res=v; return;}
    }
}


int main() {
    
    vector<string> v(10);
    for (int i=0;i<10;i++) cin >> v[i];
    string s; cin >> s;
    vector<string> words=split(s, ';');
    f(v, words);
    for (int i=0;i<res.size();i++) cout << res[i] << endl;
    return 0;
}