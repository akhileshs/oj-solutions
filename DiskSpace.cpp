#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>

#define mp make_pair
#define pb push_back

using namespace std;

class DiskSpace {
    public:
    	int minDrives(vector<int> used, vector<int> total) {
    	    int sum = 0, i;
    	    for(i=0;i<used.size();++i) sum += used[i];
    	    sort(total.begin(), total.end());
    	    for(i=total.size()-1;i>=0;i--) {
    	    	sum -= total[i];
    	    	if(sum<=0) break;
	    }
	    return total.size()-i;
	}
};

