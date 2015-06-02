#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;

ll a[5] = {1,1,2,6,4};
ll lastdig[4] = {6,2,4,8};
ll recur(ll n){
	ll y,p,temp;
	y = n/5;
	cout << "y= " << y << endl;
	if(n<5){
		return a[n];
	}
	if(y==0){
		p=1;
	}
	else{
		temp = y%4;
		p = lastdig[temp];
	}
	cout << "p= " << p << endl;
	return (recur(y)*recur(n%5)*p)%10;
}

int main(){
	ll N;
	while(scanf("%lli",&N)>0){
		int ans = recur(N);
		cout << ans << endl;
	}
	return 0;
}
