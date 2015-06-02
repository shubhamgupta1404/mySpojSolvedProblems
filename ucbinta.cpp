#include<iostream>
#include<cstdio>
#define MAX 1001
int a[MAX][MAX],ans[MAX];
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(n==2){
		printf("1 1");
	}
	else{
		ans[0]=((a[0][1]+a[0][2])-a[1][2])/2;
		printf("%d ",ans[0]);
		for(i=1;i<n;i++){
			ans[i]=a[0][i]-ans[0];
			printf("%d ",ans[i]);
		}		
	}
	return 0;
}
