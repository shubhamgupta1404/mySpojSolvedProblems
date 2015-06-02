#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;
int a[100001],b[100001];
int main(){
	int n;
	while(1){
		int flag = 1;
		scanf("%d",&n);
		if(n==0) break;
		a[0]=b[0]=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			b[a[i]]=i;
		}
		for(int i=1;i<=n;i++){
			if(a[i]!=b[i]){
				printf("not ambiguous\n");
				flag=0;
				break;
			}
		}
		if(flag==1)
			printf("ambiguous\n");
	}
	return 0;
}
