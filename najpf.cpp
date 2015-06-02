#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		int l1= a.length();
		int l2= b.length();
		vector <int> pos;
		for(int i=0;i<l1;){
			int found = a.find(b,i);
			if(found!=string::npos){
				pos.push_back(found+1);
				i = found + 1;
				//i=i+l2-1;
			}
			else{
				break;
			}
		}
		
		if(pos.size()==0){
			cout << "Not Found\n\n";
		}
		else{
			cout << pos.size() << endl;
			for(int i=0;i<pos.size();i++){
				cout << pos[i] << " ";
			}
			cout << "\n\n";
		}
	}
	return 0;
}
