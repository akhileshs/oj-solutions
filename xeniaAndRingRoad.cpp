#include<iostream>
using namespace std;

int main(){
    int n,m,cur=1,next;
    long long t = 0;
    cin>>n>>m;
    for(int i=0;i<m;++i){
    	cin>>next;
    	t+=(next-cur+n)%n;
    	cur = next;
    }
    cout<<t<<"\n";
}

