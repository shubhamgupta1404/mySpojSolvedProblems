#include<iostream>
#include<vector>
#define MOD 10000007
using namespace std;

int SmallC(int n, int r)
{
    vector< vector<int> > C(2,vector<int> (r+1,0)); 
    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
    }
    return C[n&1][r];
}

int main(){
	int a,b,ans;
	scanf("%d %d",&a,&b);
	if(a<b){
		ans = -1;
	}
	else{
		ans = SmallC(a-1,b-1);
	}
	printf("%d\n",ans);
	return 0;
}
