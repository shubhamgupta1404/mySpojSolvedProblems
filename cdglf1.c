#include<algorithm>
#define s(a) scanf("%d",&a)
#define f(a) for(i=0;i<a;i++)
int a[100];
main(t,n,m,i,x){
	s(t);
	while(t--){
		x=0;
		s(n);s(m);
		f(n) s(a[i]);
		sort(a,a+n);
		f(m) x+=a[i];
		printf("%d\n",x*-1);
	}
	return 0;
}
