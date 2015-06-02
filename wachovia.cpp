#include<iostream>
#include<cstdio>

using namespace std;

int max(int a, int b){
	return (a > b) ? a : b;
}

int knapsack(int W, int w[], int val[], int n){
	int K[n+1][W+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
			if(i==0 || j==0){
				K[i][j]=0;
			}
			else if(w[i-1]<=j){
				K[i][j]=max(val[i-1]+K[i-1][j-w[i-1]],K[i-1][j]);
			}
			else{
				K[i][j]=K[i-1][j];
			}
			//cout << K[i][j] << "\t";
		}
		//cout << endl;
	}
	return K[n][W];
}
int main(){
	int t;
	cin >> t;
	int w[51],val[51];
	while(t--){
		int W,n;
		scanf("%d %d",&W,&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&w[i],&val[i]);
		}
		int ans = knapsack(W,w,val,n);
		printf("Hey stupid robber, you can get %d.\n\n",ans);
	}
	return 0;
}
