#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num[55];
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    	cin>>num[i];
    sort(num,num+n);
    if(k>n) cout<<-1<<endl;
    else cout<<num[n-k]<<" "<<num[n-k]<<endl;

}

