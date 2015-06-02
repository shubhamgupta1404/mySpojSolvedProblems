#include<iostream>
#include<cstring>
using namespace std;

int arr[2002][2002];
char s1[2001],s2[2001];
int min(int a, int b){
	return a>b?b:a;
}
int main(){
	int t,l1,l2,i,flag,j;
	scanf("%d",&t);
	while(t--){
		scanf("%s %s",s1,s2);
		l1= strlen(s1);
		l2= strlen(s2);
		for(i=0;i<=l1;i++){
			arr[i][0]=i;
		}
		for(i=1;i<=l2;i++){
			arr[0][i]=i;
		}
		for(i=1;i<=l1;i++){
			for(j=1;j<=l2;j++){
				arr[i][j] = min(min(arr[i-1][j]+1,arr[i][j-1]+1),arr[i-1][j-1]+((s1[i-1]==s2[j-1])?0:1));
			}
		}
		printf("%d\n",arr[l1][l2]);
	}
	return 0;
}
