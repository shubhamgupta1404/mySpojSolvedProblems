#include<iostream>
#include<cstring>

using namespace std;

int checkString(char* s, int length){
	for(int i=0; i<length; i++){
		if(s[i]=='m')
			return 1;
	}
	return 0;
}

int stringToInt(char* s, int length){
	int num;
	num = s[0]-48;
	for(int i=1; i<length; i++){
		num =  (num*10) + (s[i] - 48);
	}
	return num;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int ans;
		char a[20],b[20],c[20];
		scanf("%s + %s = %s",a,b,c);
		int l1,l2,l3;
		l1 = strlen(a);
		l2 = strlen(b);
		l3 = strlen(c);
		
		int c1 = checkString(a,l1);
		int c2 = checkString(b,l2);
		int c3 = checkString(c,l3);
		int t1, t2;
		
		if(c1==1){
			t1 = stringToInt(c,l3);
			t2 = stringToInt(b,l2);
			ans = t1 - t2;
			printf("%d + %d = %d\n",ans,t2,t1);
		}
		else if(c2==1){
			t1 = stringToInt(c,l3);
			t2 = stringToInt(a,l1);
			ans = t1 - t2;
			printf("%d + %d = %d\n",t2,ans,t1);
		}
		else {
			t1 = stringToInt(a,l1);
			t2 = stringToInt(b,l2);
			ans = t1 + t2;
			printf("%d + %d = %d\n",t1,t2,ans);
		}
	}
	return 0;
}
