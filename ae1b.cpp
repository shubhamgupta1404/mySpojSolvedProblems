#include<iostream>
#include<algorithm>
using namespace std;
bool function(const int& a, const int& b){
	return a>b;
}
int arr[1000];
int main(){
	int t;
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
		if(temp<total){
			cout << "impossible" << endl;
		}
		else{
			cout << ans << endl;	
		}
	}
	return 0;
}
