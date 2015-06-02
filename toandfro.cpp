#include<iostream>
#include<cstring>

using namespace std;

int main(){
	while(1){
		int c;
		cin >> c;
		if(c==0){
			break;
		}
		char arr[200];
		cin >> arr;
		int l = strlen(arr);
		//cout << l << endl;
		int r = l/c;
		//cout << r << endl;
		char str[r][c];
		int p=0;
		int i,j;
		for(i=0;i<r;i++){
			if(i%2==0){
				for(j=0;j<c;j++){
					str[i][j] = arr[p++];
				}
			}
			else{
				for(j=c-1;j>=0;j--){
					str[i][j] = arr[p++];
				}
			}
		}
		for(i=0;i<c;i++){
			for(j=0;j<r;j++){
				cout << str[j][i];
			}
		}
		cout << endl;
	}
	return 0;
}
