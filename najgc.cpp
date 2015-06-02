#include<iostream>
#include<cstdio>

using namespace std;

long long int gcd(long long int a, long long int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	int t;
	cin >> t;
	for(int x=1;x<=t;x++){
		long long int x1,y1,x2,y2,N,D,hcf;
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;
		N = (x1*(x2+1)) + (y1*(y2+1));
		D = (x1+y1)*(x2+y2+1);
		if(N==0){
			cout<<"Case "<< x <<": 0"<<endl;
		}
		else{
			hcf = gcd(N,D);
			N /= hcf;
			D /= hcf;
			cout<<"Case "<< x <<": "<< N <<"/"<< D <<endl;
		}
		
	}
	
	return 0;
}
