#include <bits/stdc++.h>
using namespace std;

int n=0;

int main() {
    string *a=new string[200];
    while(true)
    {
        char t;
        cin>>t;
        if(t=='1') {
            n++;
            string s;
            getline(cin>>ws,s);
            *(a+n)=s;
        }
        else if(t=='2') sort(a+1,a+1+n);
        else if(t=='3') {
            for(int i=1;i<=n;i++) cout<<*(a+i)<<'\n';
        }
        else {
            cout<<"END";
            delete []a;
            exit(0);
        }
    }
    return 0;
}
