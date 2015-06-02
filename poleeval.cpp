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
int c[1000],x[101];

int f(int x, int n){
	int ans=c[0], i=0;
    while(i < n)
    {
        ans = ans*x + c[i+1];
        i++;
    }
    return ans;
}

int main(){
	int t=0;
	while(1){
		int n,k;
		cin >> n;
		if(n==-1){
			break;
		}
		t++;
		printf("Case %d:\n",t);
		for(int i=0;i<=n;i++){
			cin >> c[i];
		}
		cin >> k;
		
		for(int i=0;i<k;i++){
			cin >> x[i];
			cout << f(x[i],n) << endl;;
		}
	}
	
	return 0;
}
