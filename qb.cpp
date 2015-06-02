#include<iostream>
using namespace std;
int b[1000],c[1000],p[1000];
int req[1000][1000];
int main(){
	int x,t,n,I,A,ans;
	cin >> t;
	for(x=1;x<=t;x++){
		for (int k=0;k<1000;k++){
			b[k]=0;
			c[k]=0;
			p[k]=0;
			req[k][0]=0;
			req[k][1]=0;
			req[k][2]=0;
		}
		cin >> n;
		int cnt = 0;
		for (int i=1;i<=n;i++){
			cin >> b[i] >> c[i];
			cin >> p[i];
			cout << "b = " << b[i] << " c = " << c[i] << " p = "<< p[i] <<"\n";
			for(int j=0; j<p[i];j++){
				cin >> I;
				cin >> A;
				req[cnt][0]=I;
				req[cnt][1]=A;
				req[cnt][2]=p[i];
				cout << "req of " << cnt << " = " << req[cnt][0] <<" " << req[cnt][1] << "\n";
				cnt++;
			}
		}
		cout << "cnt = " << cnt <<"\n";
		ans = 0;
		for(int i=n;i>0;i--){
			if(p[i]==0){
				ans += b[i];
			}
			else{
				ans += b[i];
				for(int j=cnt-1; j>(cnt-1-p[i]); j--){
						int index = req[j][1];
						cout << "index = "<< index <<"\n";
						ans = ans + (req[j][0] * b[index]);
						cout << " utility after " << j << " = "<< ans << "\n" << "     req = " << b[req[j][1]] <<" " << req[j][0] << "\n";
				}
				cnt = cnt - p[i];
			}
			cout << " utility after weapon " << i << " = "<< ans << "\n\n";
		}
		cout << "Case #" << x << ": " << ans << "\n";
	}
	return 0;
}
