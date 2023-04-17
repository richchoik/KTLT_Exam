#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1,c1,r2,c2,r3,c3;
    cin>>r1>>c1;
    int **p1=new int*[r1];
    for(int i=0;i<r1;i++) p1[i]=new int[c1];
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) cin>>p1[i][j];
    }
    cin>>r2>>c2;
    int **p2=new int*[r2];
    for(int i=0;i<r2;i++) p2[i]=new int[c2];
    for(int i=0;i<r2;i++) {
        for(int j=0;j<c2;j++) cin>>p2[i][j];
    }
    if(c1!=r2) {
        cout<<"SYNTAX ERROR";
        exit(0);
    }
    r3=r1;c3=c2;
    int **p3=new int*[r3];
    for(int i=0;i<r3;i++) p3[i]=new int[c3];
    for(int i=0;i<r3;i++) {
        for(int j=0;j<c3;j++) {
            int temp=0;
            for(int k=0;k<c1;k++) temp+= (*(*(p1+i)+k)) * (*(*(p2+k)+j));
            p3[i][j]=temp;
        }
    }
    for(int i=0;i<r3;i++) {
        for(int j=0;j<c3;j++) cout<<p3[i][j]<<" ";
        cout<<'\n';
    }
    for(int i=0;i<r1;i++) delete[] p1[i];
    delete[] p1;
    for(int i=0;i<r2;i++) delete[] p2[i];
    delete[] p2;
    for(int i=0;i<r3;i++) delete[] p3[i];
    delete[] p3;
    return 0;
}