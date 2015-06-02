#include<stdio.h>
#define s(a) scanf("%d",&a)
main(t,n,i){s(t);while(t--){float ans=0;
	s(n);for(i=1;i<=n;i++)ans+=(float)(i)/(float)((pow(n,2)-n+1)*(pow(n,2)+n+1));printf("%d %.5f\n",t,ans);
}}
