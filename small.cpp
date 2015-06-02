#include<iostream>
#define MAX 10001
#define MOD 1000000007
#define ll long long int
using namespace std;

ll arr[MAX];
ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

ll lcm(ll a, ll b){
	return (((a*b)/gcd(a,b))%MOD);
}

int main(){
	//precompute();
	int t;
	int cnt=1;
	cin >> t;
	arr[1]=1;
	while(t--){
		int n;
		cin >> n;
		if(n <= cnt){
			cout << arr[n] << endl;
			continue;
		}
		else{
			for(int i=cnt+1;i<=n;i++){
				arr[i]=lcm(i,arr[i-1]);
			}
			cnt = n;
			cout << arr[n] << endl;
		}
	}
}
