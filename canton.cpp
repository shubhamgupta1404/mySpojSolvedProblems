#include <iostream>
#include <cstdio>
#include<cmath>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,t,i,j,a,b,temp=1;
		cin >> n;
		t = floor((sqrt((8*n)-7)-1)/2);
		if(t%2!=0){
			temp=-1;
		}
		i = n-((t*(t+1))/2);
		j = (((t*t)+(3*t)+4)/2)-n;
		a = (((temp+1)*j) - ((temp-1)*i))/2;
		b = (((temp+1)*i) - ((temp-1)*j))/2;
		printf("TERM %d IS %d/%d\n",n,a,b);
	}
	return 0;
}
