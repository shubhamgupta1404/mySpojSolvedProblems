#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int x[100001];
 
int func(int res, int x[], int n, int k) {
    int spot = 1;
    int pos = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] - pos >= res) {
            pos = x[i];
            spot++;
            if (spot == k) {
                return 1;
            }
        }
    }
    return 0;
}
 
int binary_search(int x[], int n, int k) {
    int low = 0, high = x[n-1];
    int res = -1;
    while (high > low) {
        int mid = (low + high) / 2;
        if (func(mid, x, n, k) == 1) {
            if (mid > res) {
                res = mid;
            }
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return res;
}
 
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    	int n, k, res;
	    scanf("%d %d",&n,&k);
	    for (int i = 0; i < n; i++) {
	        scanf("%d",&x[i]);
	    }
	    sort(x, x + n);
	    res = binary_search(x, n, k);
	    printf("%d\n",res);
    }
    return 0;
} 
