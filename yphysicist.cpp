#include<cstdio>
using namespace std;

int main(){
    int a,b,c,i,n,sa=0,sb=0,sc=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
    	scanf("%d%d%d",&a,&b,&c);
    	sa+=a;sb+=b;sc+=c;
    }
    if (sa==0 && sb==0 && sc==0)
    	printf("YES");
    else
    	printf("NO");
}

