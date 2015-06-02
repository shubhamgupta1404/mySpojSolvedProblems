#include<iostream>
#define max 1000

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	while (!(a==0 && b==0)){
		int arr1[max],arr2[max];
		arr1[0]=a;
		int n;
		for(n=1;;n++){
			int flag=0;
			int temp=0;
			//cout << "n = " << n << "\n";
			while(a>0){
				temp += (a % 10)*(a % 10);
				a /= 10;
			}
			//cout << "\t next int = " << temp<< "\n";
			arr1[n]= temp;
			a = temp;
			for(int i=0;i<n;i++){
				 //cout << "\t\t i = " << i << "\n";
				if(arr1[i]==arr1[n]){
					//cout << "\t\t\ttrue\n";
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		int n1 = n;
		arr2[0]=b;
		for(n=1;;n++){
			int flag=0;
			int temp=0;
			//cout << "n = " << n << "\n";
			while(b>0){
				temp += (b % 10)*(b % 10);
				b /= 10;
			}
			//cout << "\t next int = " << temp<< "\n";
			arr2[n]= temp;
			b = temp;
			for(int i=0;i<n;i++){
				 //cout << "\t\t i = " << i << "\n";
				if(arr2[i]==arr2[n]){
					//cout << "\t\t\ttrue\n";
					flag=1;
					break;
				}
			}
			if(flag==1){
				break;
			}
		}
		int n2 = n;
		int min = 9999999;
		int temp;
		//cout << n1 << " " << n2;
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				if(arr1[i]==arr2[j]){
					temp = i+j+2;
					if(temp < min){
						min = temp;
					}
				}
			}
		}
		if(min == 9999999){
			min = 0;
		}
		printf("%d %d %d\n",arr1[0],arr2[0],min);
		cin >> a >> b;
	}	
	return 0;
}
