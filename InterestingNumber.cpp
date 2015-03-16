#include <bits/stdc++.h>

using namespace std;

class InterestingNumber {
    public:
    	string isInteresting(string x);
};

string InterestingNumber::isInteresting(string x) {
    string Yes = "Interesting";
    string No = "Not Interesting";

    map<char, int> data;

    for(int i=0; i<x.length(); ++i) {
    	char c = x[i];
    	data[c]++;
    }

    map<char, int>::iterator it;
    for(it=data.begin(); it!=data.end(); it++) {
    	if(it -> second != 2) {
    	    return No;
	}
	else {
	    int nIndexA = x.find(it->first);
	    int nIndexB = x.find(it->first, nIndexA+1);

	    if (nIndexB-nIndexA-1 != atoi(&it->first))
	    	return No;
	}
    }
    return Yes;
}

