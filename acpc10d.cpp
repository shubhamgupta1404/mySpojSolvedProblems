#include<iostream>
using namespace std;
inline long long int min(long long int a,long long int b){
	return (a<b?a:b);
}
int main(){
	int n,k=1;
	while(1){
		cin >> n;
		long long int a1[n];
		long long int a2[n];
		long long int a3[n];
		long long int ans;
		
		if(n==0){
			break;
		}
		
		for(int i=0;i<n;i++){
			cin >> a1[i] >> a2[i] >> a3[i];
		}
		a3[0] += a2[0];
		a1[1] += a2[0];
		a2[1] += min(a2[0],min(a3[0],a1[1]));
		a3[1] += min(a2[0],min(a3[0],a2[1]));
		
		for(int i=2;i<n;i++){
			//for 3rd row onwards
		
			//for 1st col
			a1[i]+=min(a1[i-1],a2[i-1]);
			
			//for 2nd col
			a2[i]+=min(min(a1[i-1],a2[i-1]),min(a1[i],a3[i-1]));
			
			//for 3rd col
			a3[i]+=min(min(a2[i-1],a3[i-1]),a2[i]);
		}
		ans = a2[n-1];
		cout << k << ". " << ans << "\n";
		k++;
	}
	return 0;
}
