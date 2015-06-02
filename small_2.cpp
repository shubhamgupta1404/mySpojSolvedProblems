#include <cstdio>
#include <cstdlib>
#include <cmath>
#include<cstring>

#define MAX 10001
#define MOD 1000000007;
int prime[2000],pc=0;


inline void print(int len)
{
	for(int i=0;i<len;i++)
		printf("%d->%d\n",i,prime[i]);
}

void markMultiples(bool arr[], int a)
{
    int i = 2, num;
    while ( (num = i*a) <= MAX )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}

void sieve()
{
    bool arr[MAX];
    memset(arr, 0, sizeof(arr));
    for (int i=1; i<MAX; ++i)
    {
        if ( arr[i] == 0 )
        {
        	prime[pc++]=i+1;
            markMultiples(arr, i+1);
        }
    }
}

long long int small(int a, int b)
{
	long long int ans = 1;
	while(b)
	{
		if(b&1)
		{
			ans *= a;
			ans %= MOD;
		}
		a*=a;
		a%=MOD;
		b>>=1;
	}
	return ans;
}


int log_func(int num, int base)
{
	int ans = 0;
	while(num >= base)
	{
		ans++;
		num/=base;
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d", &t);
	sieve();
	long long int ans;
	while(t--)
	{
		int n;
		ans = 1;
		scanf("%d", &n);
		if(n==0)
		{
			printf("0\n");
			continue;
		}
		for(int i=0;i<pc;i++)
		{
			if(prime[i] > n)
				break;
			ans *= small(prime[i], log_func(n, prime[i]));
			ans %= MOD;
		}
		printf("%lld\n",ans);
	}
 	return 0;
}
