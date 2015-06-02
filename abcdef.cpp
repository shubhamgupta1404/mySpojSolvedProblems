#include<iostream>
#include<algorithm>

using namespace std;

int arr[1040000];

int main(){
	int n;
	int a[101];
	cin >> n;
	int i, j, k;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	int cnt=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(a[k]==0)
					continue;
				arr[cnt++]=(a[k]*(a[i]+a[j]));
			}
		}
	}
	sort(arr, arr+cnt);
	int temp;
	int ans=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				temp=(a[k]*a[i])+a[j];
				ans += upper_bound(arr,arr+cnt,temp) - lower_bound(arr,arr+cnt,temp); 
			}
		}
	}
	cout << ans << endl;
	return 0;
}
