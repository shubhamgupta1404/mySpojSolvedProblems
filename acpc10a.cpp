#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	while(!(a==0 && b==0 && c==0)){
		if((c+a)==(2*b)){
			printf("AP %d\n",(2*c - b));
		}
		if((c*a)==(b*b)){
			printf("GP %d\n",(c*c/b));
		}
		cin >> a >> b >> c;
	}
	return 0;
}
