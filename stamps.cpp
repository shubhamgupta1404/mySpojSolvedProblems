#include<iostream>
#include<algorithm>
using namespace std;
bool function(const int& a, const int& b){
	return a>b;
}
int arr[1000];
int main(){
	int t,cnt=1;
	cin >> t;
	while(t--){
		int n,total;
		cin >> total >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr, arr+n, function);
		/*for(int i=0;i<n;i++){
			cout << arr[i]<<endl;
		}*/
		int ans=0;
		int temp=0;
		for(int i=0;i<n;i++){
			temp += arr[i];
			if(temp<total){
				ans++;
			}
			else{
				break;
			}
		}
		ans++;
		cout << "Scenario #" << cnt << ":"<<endl;
		if(temp<total){
			cout << "impossible" << endl;
		}
		else{
			cout << ans << endl;	
		}
		cout << endl;
		cnt++;
	}
	return 0;
}
