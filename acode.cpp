#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char str[5001];
long long int a[5001];

int main(){
	while(1){
		scanf("%s",str);
		if(str[0]=='0'){
			break;
		}
		int length = strlen(str);
		memset(a, 0, sizeof a);
		a[0]=1;
		for(int i=1;i<length;i++){
			int temp = 0;
			temp = str[i-1]-48;
			temp *= 10;
			temp += str[i]-48;
			if(!(str[i]=='0')){
				a[i] = a[i-1];
			}
			if(temp > 9 && temp < 27){
				if(i-2<0){
					a[i] += a[0];
				}
				else a[i] += a[i-2];
			}
		}
		cout << a[length-1] << "\n";
	}
	return 0;
}
