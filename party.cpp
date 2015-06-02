#include<iostream>
#include<cstdio>

using namespace std;

int max(int a, int b){
	return (a > b) ? a : b;
}

int main(){
	int cost[101],fun[101],W,n,maxc;
	int ans[101][501];
	while(1){
		scanf(" %d %d",&W,&n); // added one space to include extra line between inputs
		if(W==0 && n==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d %d",&cost[i],&fun[i]);
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=W;j++){
				if(i==0 || j==0){
					ans[i][j]=0;
				}
				else if(cost[i-1]<=j){
					ans[i][j]=max(fun[i-1]+ans[i-1][j-cost[i-1]],ans[i-1][j]);
				}
				else{
					ans[i][j]=ans[i-1][j];
				}
			}
		}
		for(int i=W-1;i>0;i--){
			if(ans[n][i]!=ans[n][W]){
				maxc=i+1;
				break;
			}
		}
		printf("%d %d\n",maxc,ans[n][W]);
	}
	return 0;
}
