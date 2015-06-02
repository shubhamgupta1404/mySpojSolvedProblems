#include<iostream>
#include<cstdio>
#include<cmath>
int main(){
	int t,x;
	long long int n,ans;
	std::cin >> t;
	for(x=1;x<=t;x++){
		scanf("%lld",&n);
		ans = (sqrt(n+1));
		ans--;
		printf("Case %d: %lld\n",x,ans);
	}
	return 0;
}
