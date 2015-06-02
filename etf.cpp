#include <iostream>
#include <cstdio>
#define MAX 1000001
using namespace std;

int phi(int k)
{
	int ans=k;
	for(int i=2; i*i<=k; ++i){
		if(k%i==0) {
			while(k%i==0)
				k=k/i;
			
			ans=ans-ans/i;
		}
	}
	if(k>1)
		ans=ans-ans/k;
	
	return ans;
}

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int ans = phi(n);
		printf("%d\n",ans);
	}
	return 0;
}
