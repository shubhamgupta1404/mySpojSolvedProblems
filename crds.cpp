#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
 
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,ans;
		scanf("%lld",&n);
		ans = (n*(n+1))+(((n-1)*n)/2);
		ans %= 1000007; 
		printf("%lld\n",ans);
	}
	return 0;
}
