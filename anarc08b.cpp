#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
char a[30],b[30],c[30];
int code[128];
const char *s[10] = {"063", "010", "093", "079", "106", "103", "119", "011", "127", "107"};
int ans[10];

int chartoint(char l, char m, char n)
{
    return (l-'0')*100+(m-'0')*10+(n-'0');
}

int main(){
	code[63]=0; code[10]=1; code[93]=2; code[79]=3; code[106]=4; code[103]=5; code[119]=6; code[11]=7; code[129]=8; code[107]=9;
	while(1){
		
		a[0]='\0';
		b[0]='\0';
		c[0]='\0';
		
		scanf("%[^+]",a);
		
		if(a[0]=='B'){
			break;
		}
		long long int x,y,sum;
		x=0;
		y=0;
		sum=0;
		int z;

		scanf("+%[^=]=",b);
		
		cout << a << " "<< b <<"\n";
		
		int len=strlen(a);
		
		for(int j=0;j<len;){
			int z;
			z=chartoint(a[j++],a[j++],a[j++]);
			//sscanf(a + i, "%3d", &z);
			printf("z at j = %d = %d\n",j,z);
			x = (10*x) + code[z];
		}
		
		printf("x= %d\n",x);
		
		for(int i=0;b[i];i=i+3){
			int z;
			z = chartoint(b[i],b[i+1],b[i+2]);
			//sscanf(b + i, "%3d", &z);
			y = (10*y) + code[z];
		}
		
		printf("y= %d\n",y);
		sum = x + y;
		
		for(z=0;sum;z++){
			ans[z] = sum%10;
			sum /= 10;
		}
				
		printf("%s+%s=",a,b);
		
		
		int cnt=0;
		for(int i=z-1;i>=0;i--){
			printf("%d = %d\n",i,ans[i]);
			int n;
			c[cnt++]=s[ans[i]][0];
			c[cnt++]=s[ans[i]][1];
			c[cnt++]=s[ans[i]][2];
		}
		printf("%s\n",c);
		
	}
	return 0;
}
