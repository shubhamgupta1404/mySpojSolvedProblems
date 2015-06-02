#include<iostream>
#define MAX 10000
using namespace std;

int main(){
	int t,n;
	cin >> t;
	while(t--){
		int arr[MAX];
		long long int sum=0;
		long long int prevSum=0;
		
		cin >> n;
		cin >> arr[0];
		for(int i=1;i<n;i++){
			cin >> arr[i];
			long long int temp = prevSum + (i-1)*(arr[i]-arr[i-1]) + arr[i]-arr[i-1];
			prevSum = temp;
			sum += prevSum;
		}
		cout << sum << "\n"; 
	}
	return 0;
}
