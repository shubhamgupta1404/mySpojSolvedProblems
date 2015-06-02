#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int n;
	while(1){
		int i=1;
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		n--;
		while(n>0){
			n = n-(i*6);
			i++;
		}
		if(n==0){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
		
	}
	return 0;
}
