#include <iostream>
#include <cstdio>

using namespace std;

void phi (long long int a, long long int b) 
{
	long long int temp,ans,k,i;
	for(k=a;k<=b;k++){
		temp=k;
		ans=k;
		for(i=2; i*i<=temp; ++i){
			if(temp%i==0) {
				while(temp%i==0)
					temp=temp/i;
				ans=ans-ans/i;
			}
		}
		if(temp>1)
			ans=ans-ans/temp;
		//printf("%lld\n",ans);
	}
}

int main()
{
	int t;
	long long int a,b;
	scanf("%lld %lld",&a,&b);
	phi(a,b);
	printf("here");
	return 0;
}
