#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int p[51];
int mi;

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>p[i];
    sort(p,p+m);
    mi=1000;
    for(int a=0;a<=m-n;a++) if (p[a+n-1]-p[a]<mi) mi = p[a+n-1]-p[a];
    cout<<mi;
}

