#include<iostream>
#include<cstdio>
#include<algorithm>
#define ull unsigned long long
using namespace std;

ull c[100000],p[100000];

int main(){
	int n;
	ull ans;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		ans = 0;
		for(int i=0;i<n;i++){
			scanf("%llu",&c[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%llu",&p[i]);
		}
		sort(c,c+n);
		sort(p,p+n);
		for(int i=0;i<n;i++){
			ans += (c[i]*p[n-1-i]); 
		}
		printf("%llu\n",ans);
	}
	return 0;
}
