#include<iostream>
#include<cstdio>
#include<cmath>
#define ull unsigned long long

using namespace std;

int main(){
	int t;
	cin >> t;
	for(int x=1;x<=t;x++){
		ull n,m;
		scanf("%llu %llu",&n,&m);
		ull ans = 1,i;
		for(i=2;i*i<n;i++){
			if(n%i==0){
				ans += i+(n/i);
			}
		}
		if(i*i == n) ans += i;
		ans %= m;
		ull count=1;
		for(i=2;i*i<ans;i++){
			if(ans%i==0){
				count+=2;
			}
		}
		if(i*i == ans) count++;
		ull a=5*count*count + 4;
		ull b=a-8;
		ull j=sqrt(a),k=sqrt(b);
		if(j*j==a || k*k==b){
			printf("Case #%d : YES.\n", x);
		}
		else{
			printf("Case #%i : NO.\n", x);
		}
	}
	return 0;
}


