#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		if(p==0){
			cout << "Airborne wins." << endl;
		}
		else{
			cout << "Pagfloyd wins." << endl;
		}
	}
}
