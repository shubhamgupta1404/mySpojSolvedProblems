#include<cstdio>
#include<algorithm>
#define s(a) scanf("%d",&a);
#define f(a) for(i=0;i<a;i++)
int a[100],t,n,m,i;main(){s(t)while(t--){s(n)s(m)f(n)s(a[i])std::sort(a,a+n);n=0;f(m)if(a[i]<0)n+=a[i];printf("%d\n",-n);}return 0;}
