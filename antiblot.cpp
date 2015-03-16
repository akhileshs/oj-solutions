#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include<sstream>
#include<vector>
using namespace std;

vector<string> split(string s, string del = " "){
    char *word, *buf, *delim;
    vector<string> res;
    delim=strdup(del.c_str());
    buf = strdup(s.c_str());
    for(word=strtok(buf,delim); word; word=strtok(0, delim))
    	res.push_back(string(word));
    free(buf);
    free(delim);
    return res;
}

int str2int(const string &str){
    stringstream ss(str);
    int n;
    ss>>n;
    return n;
}

int main(){
    int t,a,b;
    scanf("%d\n\n",&t);
    string input;
    vector<string> parts, temp;
    while(t--){
    	getline(cin, input);
    	scanf("\n");
    	parts = split(input, " +=");
    	if(parts[0].find("machula") != -1){
    	    a=str2int(parts[1]);
    	    b=str2int(parts[2]);
    	    cout<<b-a<<" + "<<a<<" = "<<b<<endl;
	}
	else if(parts[1].find("machula") != -1){
	    a=str2int(parts[0]);
	    b=str2int(parts[2]);
	    cout<<a<<" + "<<b-a<<" = "<<b<<endl;
	}
	else if(parts[2].find("machula") != -1){
	    a=str2int(parts[0]);
	    b=str2int(parts[1]);
	    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	}
	else{
	    cout<<input<<endl;
	}
    }
}

