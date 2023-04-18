#include <bits/stdc++.h>
using namespace std;
int n=0;
string a[200];

bool cmp(string x, string y) {
    return x<y;
}

int main() {
    char t;
    while(true) {
        cin>>t;
        if(t=='1') {
            n++;
            string s;
            getline(cin>>ws,s);
            a[n]=s;
        }
        else if(t=='2') sort(a+1,a+1+n,cmp);
        else if(t=='3') {
            for(int i=1;i<=n;i++) cout<<a[i]<<" "<<'\n';
        }
        else {
            cout<<"END";
            return 0;
        }
    }
    return 0;
}
