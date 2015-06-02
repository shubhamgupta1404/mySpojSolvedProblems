#include <iostream>
#include <cstdio>
 
using namespace std;

int main(){
	long long a3,an3,s,n,d,a,an,i;
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld %lld",&a3,&an3,&s);
		n = 2*s/(a3+an3);
		printf("%lld\n",n);
		d = (an3-a3)/(n-5);
		a = a3-(2*d);
		for(i=0;i<n;i++){
			printf("%lld ",a);
			a += d;
		}
		printf("\n");
	}
	return 0;
}
