#include<iostream>
#include<cstring>

using namespace std;

int a[1000];

int main(){
	int n,temp,ans,r,sum;
	memset(a,0,sizeof(a));
	cin >> n;
	ans = 0;
	sum=0;
	temp=n;
	while(1){
		sum=0;
		if(temp<1000){
			if(a[temp]==1){
				ans = -1;
				break;
			}
			else{
				a[temp]=1;
			}
		}
		if(temp==1){
			break;
		}
		while(temp>0){
			r = temp%10;
			sum = sum + (r*r);
			temp/=10;
		}
		temp=sum;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
