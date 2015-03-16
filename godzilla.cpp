#include<stdio.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    int i,j,ng,nm,m1,m2;
    while(t--){
    	scanf("%d",&ng);
    	scanf("%d", &nm);
    	int g[ng];
    	int m[nm];
    	for(j=0;j<ng;++j)
    	    scanf("%d", &g[j]);
    	for(j=0;j<nm;j++)
    	    scanf("%d", &m[j]);
    	m1=g[0];
    	m2=g[0];
    	for(j=1;j<ng;++j){
    	    if(m1<g[j])
    	    	m1=g[j];
	}
	for(j=1;j<nm;j++){
	    if(m2<m[j])
	    	m2=m[j];
	}

	if(m1>=m2)
	    printf("Godzilla\n");
	else if(m1<m2)
	    printf("MechaGodzilla\n");
	else
	    printf("uncertain\n");
    }
}
