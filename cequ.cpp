#include<iostream>
#include<cstdio>

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int t,a,b,c,x,hcf;
	std::cin >> t;
	for(x=1;x<=t;x++){
		scanf("%d %d %d",&a,&b,&c);
		hcf = gcd(a,b);
		if(c%hcf!=0){
			printf("Case %d: No\n",x);
			continue;
		}
		else{
			printf("Case %d: Yes\n",x);
		}
	}
	return 0;
}
