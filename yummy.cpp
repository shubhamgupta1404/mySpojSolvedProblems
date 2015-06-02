#include<iostream>
#include<cmath>
using namespace std;

int a[]={0,1,1,1,4,6,19,43,120,307,866,2336,6588,18373,52119,147700,422016};

int main(){
	int t,n;
	cin >> t;
	for(int i=1;i<=t;i++){
		cin >> n;
		printf("Case #%d: %d\n",i,a[n]);
	}
	return 0;
}
