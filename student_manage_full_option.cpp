#include <bits/stdc++.h>
using namespace std;

int n=0;

struct date{
    string name;
    string full_name;
    string name_left;
    string mssv;
    double cpa;
};
date a[200];

string beautify(string x) {
    string res;
    int i=0;
    while((int)x[i]==32) i++;

    int j=x.size()-1;
    while((int)x[j]==32) j--;

    for(int k=i;k<=j;k++) res+=x[k];

    for(int k=res.size()-1;k>=0;k--) {
        if((int)res[k]==32) {
            if((int)res[k-1]==32) res.erase(res.begin()+k);
        }
    }

    for(int k=0;k<res.size();k++) {
        if((int)res[k]>=97) res[k]-=32;
    }
    return res;
}

void updatee(){
    cout<<"Ho va ten SV:"<<'\n';
    n++;
    string s,tmp;
    getline(cin>>ws,s);

    cout<<"MSSV:"<<'\n';
    string s2;
    getline(cin>>ws,s2);
    a[n].mssv=s2;

    double s3;
    cout<<"CPA:"<<'\n';
    cin>>s3;
    a[n].cpa=s3;

    s=beautify(s);
    a[n].full_name=s;

    int j=s.size()-1;
    while((int)s[j]!=32) j--;
    for(int k=j+1;k<s.size();k++) tmp+=s[k];
    a[n].name=tmp;
    for(int k=0;k<j;k++) a[n].name_left+=s[k];
}

bool ten(date x, date y) {
    string xx=x.name,yy=y.name;
    if(xx<yy) return true;
    else if(xx>yy) return false;
    else return x.name_left<y.name_left;
}

bool ho(date x, date y) {
    return x.full_name<=y.full_name;
}

bool id(date x, date y) {
    return x.mssv<=y.mssv;
}

bool cpaa(date x, date y) {
    return x.cpa>=y.cpa;
}

void sortt() {
    cout<<"1: Sap xep theo ten."<<'\n';
    cout<<"2: Sap xep theo ho."<<'\n';
    cout<<"3: Sap xep thep MSSV."<<'\n';
    cout<<"4: Sap xep theo CPA tu cao den thap."<<'\n';
    char tt;
    cin>>tt;
    if(tt=='1') sort(a+1,a+1+n,ten);
    else if(tt=='2') sort(a+1,a+1+n,ho);
    else if(tt=='3') sort(a+1,a+1+n,id);
    else if(tt=='4') sort(a+1,a+1+n,cpaa);
    else cout<<"Loi thao tac."<<'\n';
}

void vieww() {
    for(int i=1;i<=n;i++) {
        cout<<a[i].full_name<<" "<<a[i].mssv<<" "<<a[i].cpa<<'\n';
    }
}

void searchh() {
    cout<<"1: Tim theo ten."<<'\n';
    cout<<"2: Tim theo MSSV."<<'\n';
    char tt;
    cin>>tt;
    if(tt=='1') {
        cout<<"Nhap ten can tim:"<<'\n';
        string tmp;
        getline(cin>>ws,tmp);
        tmp=beautify(tmp);
        for(int i=1;i<=n;i++) {
            if(a[i].full_name==tmp) {
                cout<<a[i].full_name<<" "<<a[i].mssv<<" "<<a[i].cpa<<'\n';
                break;
            }
        }
    }
    else if(tt=='2') {
        cout<<"Nhap MSSV can tim:"<<'\n';
        string tmp;
        cin>>tmp;
        for(int i=1;i<=n;i++) {
            if(a[i].mssv==tmp) {
                cout<<a[i].full_name<<" "<<a[i].mssv<<" "<<a[i].cpa<<'\n';
            }
        }
    }
    else cout<<"Loi thao tac"<<'\n';
}

int main() {
    char t;

    while(true)
    {
        cout<<"Thao tac:"<<'\n';
        cout<<"1: Nhap thong tin sinh vien."<<'\n';
        cout<<"2: Sap xep danh sach sinh vien."<<'\n';
        cout<<"3: Xem danh sach sinh vien day du."<<'\n';
        cout<<"4: Xoa danh sach cu."<<'\n';
        cout<<"5: Tim kiem sinh vien."<<'\n';
        cout<<"Bam phim bat ky de thoat chuong trinh."<<'\n';

        cin>>t;

        if(t=='1') updatee();
        else if(t=='2') sortt();
        else if(t=='3') vieww();
        else if(t=='4') {
            for(int i=0;i<=n;i++) {
                a[i].full_name="";
                a[i].name="";
            }
            n=0;
        }
        else if(t=='5') searchh();
        else {
            cout<<"END";
            exit(0);
        }
    }

    return 0;
}
