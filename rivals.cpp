#include<iostream>
#include<vector>
#define ll long long int
#define MOD 1000000007
using namespace std;

ll SmallC(ll n, ll r)
{
	//printf("small\n");
    vector< vector<ll> > C(2,vector<ll> (r+1,0)); 
    for (ll i=0; i<=n; i++)
    {
        for (ll k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
    }
    return C[n&1][r];
}

ll Lucas(ll n, ll m)
{
    if (n==0 && m==0) return 1;
    //printf("lucas\n");
    ll ni = n % MOD;
    ll mi = m % MOD;
    if (mi>ni) return 0;
    return Lucas(n/MOD, m/MOD) * SmallC(ni, mi);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a,b;
		scanf("%lld %lld",&a,&b);
		//printf("here\n");
		ll ans = Lucas(a+b,b);
		cout << ans << endl;
	}
	return 0;
}
