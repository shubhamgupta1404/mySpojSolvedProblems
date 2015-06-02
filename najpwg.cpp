#include <iostream>
#include <cstdio>
#define MAX 100002
using namespace std;

long long int arr[MAX];

void phi () 
{
	arr[0]=0;
	for(int k=1;k<MAX;k++){
		int temp=k;
		int ans=k;
		for(int i=2; i*i<=temp; ++i){
			if(temp%i==0) {
				while(temp%i==0)
					temp=temp/i;
				ans=ans-ans/i;
			}
		}
		if(temp>1)
			ans=ans-ans/temp;
		
		arr[k]=ans+arr[k-1];
	}
}

int main()
{
	phi();
	int t;
	long long int n;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%lld",&n);
		long long int ans = (n*(n+1))/2;
		//printf("Debug ans=%lld, arr=%lld\n",ans,arr[n]);
		ans = ans - arr[n];
		printf("Case %d: %lld\n",i,ans);
	}
	return 0;
}
