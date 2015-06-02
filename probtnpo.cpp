#include <cstdio>
#include <algorithm>

using namespace std;

long long int compute(int n){
	long long int ans = 1;
	while(n!=1){
		if(n&1){
			ans += 2;
			n = ((3*n)+1)>>1;
		}
		else{
			ans++;
			n = n>>1;
		}
		//printf("\ttemp= %d, n= %d\n",temp,n);
	}
	return ans;
}

int main(){
	int l,r;
	long long int ans,m;
	while(scanf("%d %d",&l,&r)!=EOF){
		m = 0;
		for(int i=min(l,r);i<=max(l,r);i++){
			m=max(m,compute(i));
		}
		printf("%d %d %lld\n",l,r,m);
	}
	return 0;
}
