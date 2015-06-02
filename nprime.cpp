#include<cstdio>
#include<cstring>
#define M 1350000
int c=0,i=1,j,n,t,p[M];
int main(){bool a[M];memset(a,0,sizeof(a));while(i<M){if(!a[i]){p[c++]=i+1;j=2;t=i+1;while((n=j*t)<=M){a[n-1]=1;++j;}}++i;}while(scanf("%d",&i)>0){printf("%d\n",p[i-1]);}}
