#include<cstdio>

int main(){
	int t;
	int arr[4] = {1,3,9,7};
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d",&n);
		scanf("%d",&m);
		
		int ans = arr[(m-n)%4];
		printf("%d\n",ans);
	}
}
