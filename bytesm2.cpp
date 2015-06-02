#include <cstdio>
int arr[102][102];

int maximum(int a, int b, int c){
	int temp = ((a>b)?a:b);
	return ((temp>c)?temp:c);
}

int main(){
	int t,h,w,i,j,max;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&h,&w);
		for(i=0;i<=w+1;i++){
			arr[0][i]=0;
			arr[h+1][i]=0;
		}
		for(i=0;i<=h+1;i++){
			arr[i][0]=0;
			arr[i][w+1]=0;
		}
		for(j=1;j<=w;j++){
			scanf("%d",&arr[1][j]);
		}		
		for(i=2;i<=h;i++){
			for(j=1;j<=w;j++){
				scanf("%d",&arr[i][j]);
				arr[i][j]+=maximum(arr[i-1][j-1],arr[i-1][j+1],arr[i-1][j]);
			}
		}
		max=arr[h][1];
		for(i=2;i<=w;i++)
		{
			max=(max>arr[h][i])?max:arr[h][i];
		}
		printf("%d\n",max);
	}
	return 0;
}
