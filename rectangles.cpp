#include<cstdio>
using namespace std;

int main(){
    int result=0,sq_sum,count=0;
    int i=1,j=1;
    scanf("%d",&sq_sum);
    for(i=1;i*i<=sq_sum;++i){
    	j=i;
    	while(result<sq_sum){
    	    result=i*j;
    	    if(result<=sq_sum){
    	    	j++;count++;
	    }
	    else break;
	}
	result=0;
    }
    printf("%d",count);
}

