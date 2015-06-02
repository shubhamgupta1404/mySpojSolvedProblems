#include<iostream>
#include<cstdio>

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main(){
	int t,a,b,x,y,hcf;
	std::cin >> t;
	while(t--){
		scanf("%d %d",&a,&b);
		hcf = gcd(a,b);
		x=b/hcf;
		y=a/hcf;
		printf("%d %d\n",x,y);
	}
	return 0;
}
