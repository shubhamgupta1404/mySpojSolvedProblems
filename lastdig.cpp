#include<iostream>
#include<cstring>
using namespace std;
static int table[] = {
    0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4, 
    5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9
};
int main(){
	int t;
	cin >> t;
	while(t--){
		char a[1000];
		long long int b;
		cin >> a >> b;
		int l = strlen(a);
		if(b==0){
			cout << "1" << endl;
			continue;
		}
		cout << table[((a[l-1]-48)<<2)+(b&3)] << endl;
	}
}
