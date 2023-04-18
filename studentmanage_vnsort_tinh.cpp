#include <bits/stdc++.h>
using namespace std;

int n=0;

struct date{
    string name;
    string full_name;
};
date a[200];

void updatee(){
    n++;
    string s,tmp;
    getline(cin>>ws,s);
    a[n].full_name=s;
    int j=s.size()-1;
    while((int)s[j]==32) j--;
    int i=j;
    while((int)s[i]!=32) i--;
    for(int k=i+1;k<=j;k++) tmp+=s[k];
    a[n].name=tmp;
}

bool cmp(date x, date y) {
    string xx=x.name,yy=y.name;
    int i=0,j=0;
    while(i<xx.size() && j<yy.size())
    {
        if(xx[i]<yy[j]) return true;
        if(xx[i]>yy[j]) return false;
        i++;
        j++;
    }
}

int main() {
    char t;
    while(true)
    {
        cin>>t;
        if(t=='1') updatee();
        else if(t=='2') sort(a+1,a+1+n,cmp);
        else if(t=='3') {
            for(int i=1;i<=n;i++) cout<<a[i].full_name<<'\n';
        }
        else if(t=='4') {
            for(int i=1;i<=n;i++) cout<<a[i].name<<'\n';
        }
        else {
            cout<<"END";
            exit(0);
        }
    }
    return 0;
}
