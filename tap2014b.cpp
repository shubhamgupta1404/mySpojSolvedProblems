#include <iostream>
#include <string>
using namespace std;

string BalancedTernary(int n) {
	string value;
	if (n == 0) {
		value = "0";
		return value;
	}

	value = "";
	
	while (n != 0) {
		int r = n % 3;
		if (r == 0)
			value += "0";
		else if (r == 1)
			value += "+";
		else {
			value += "-";
			++n;
		}
		n /= 3;
	}
	return value;
}
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string out = BalancedTernary(n);
		int l = out.length();
		for(int i=l-1;i>=0;i--){
			cout << out[i];
		}
		cout << endl;
	}
	return 0;
}
 
