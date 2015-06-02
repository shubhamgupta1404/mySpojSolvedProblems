#include <cstdio>
#include <cstdlib>
#include <cmath>
#include<cstring>

#define MAX 50001
#define MOD 1000000007;
int prime[6000],pc=0;


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
    //printf("pc = %d\n",pc);
}

int main()
{
	int t;
	scanf("%d", &t);
	sieve();
	while(t--){
		int n;
		scanf(" %d", &n);
		long long int ans=1;
		for(int i=0;i<pc;i++){
			if(prime[i]>n){
				break;
			}
			int temp=1,cnt=0;
			temp *= prime[i];
			while(1){
				if(temp>n){
					break;
				}
				else{
					cnt += (n/temp);
					temp *= prime[i];
				}
			}
			ans = (ans*(cnt+1))%MOD;
		}
		printf("%lld\n\n",ans);
	}
 	return 0;
}
