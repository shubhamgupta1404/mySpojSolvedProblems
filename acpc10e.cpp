#include<iostream>

using namespace std;

unsigned long long nextPowerOf2(unsigned long long n){
	unsigned long long p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n) {
        p = p<< 1;
    }
    return p;
}

int main(){
	unsigned long long g,t,a,d;
	while(1){
		scanf("%llu %llu %llu %llu",&g,&t, &a, &d);
		if(g==-1){
			break;
		}
		unsigned long long Mat = g*t*(t-1)/2;
		unsigned long long extra;
		long long int ans = nextPowerOf2((g*a)+d);
		//cout << ans << "\n";
		extra = ans - ((g*a) + d);
		Mat = Mat + ans - 1;
		
		printf("%llu*%llu/%llu+%llu=%llu+%llu\n",g,a,t,d,Mat,extra);
	}
	return 0;
}
