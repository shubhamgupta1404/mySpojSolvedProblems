#include<cstdio>
#include<cmath>

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}

bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4);
}

int main(){
	int t,cnt,x,y,ans,hcf,i,fib;
	scanf("%d",&t);
	for(cnt=1;cnt<=t;cnt++){
		scanf("%d %d",&x,&y);
		ans = 0,fib = 0;;
		int l = sqrt(x);
		for(i=2;i<l;i++){
			if(x%i==0){
				ans = (ans+i+(x/i))%y;
			}
		}
		ans = (ans+1)%y;
		if((i-1)*(i-1) == x) ans = (ans+i-1)%y;
		
		l = sqrt(ans);
		for(i=2;i<l;i++){
			if(ans%i==0){
				fib += 2;
			}
		}
		fib++;
		if((i-1)*(i-1) == x) fib++;
		if(isFibonacci(fib)){
			printf("Case #%d : YES.\n",cnt);
		}
		else{
			printf("Case #%d : NO.\n",cnt);
		}
		
	}
	return 0;
}


