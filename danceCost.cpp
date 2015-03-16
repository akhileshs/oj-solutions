#include <bits/stdc++.h>
using namespace std;

#define allof(c) (c).begin(), (c).end()

class CostOfDancing {
    public:
    	int minimum(int K, vector<int> danceCost) {
    	    sort(allof(danceCost));
    	    return accumulate(danceCost.begin(), danceCost.begin()+K, 0);
	}
};

