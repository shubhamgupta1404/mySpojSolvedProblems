#include<stdio.h>
#include<math.h>

inline int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int t,x,y,ans,hcf,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		hcf = gcd(x,y);
		ans = 0;
		int l = sqrt(hcf);
		for(i=1;i<=l;i++){
			if(hcf%i==0){
				ans = ans+2;
			}
		}
		if((i-1)*(i-1) == hcf) ans--;
		printf("%d\n",ans);
	}
	return 0;
}


