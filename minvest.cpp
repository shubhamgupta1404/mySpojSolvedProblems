#include<iostream>
using namespace std;

int findMaxValue(int weight[],int values[],int n,int capacity) {
   int knapsack[capacity+1];
   knapsack[0] = 0;
   int i,j;
   for(j=1;j<=capacity;j++) {
      int max = knapsack[j-1];
      for(i=0;i<n;i++) {
         int x = j-weight[i];
         if(x >= 0 && (knapsack[x] + values[i]) > max) {
            max = knapsack[x] + values[i];
         }
         knapsack[j] = max;
      }
   }
   return knapsack[capacity];
}


int main() {
	int weight[10],values[10];
	int t,capacity,n,d,i,ans,rem;
	cin >> t;
	while(t--){
		cin >> capacity >> n >> d;
		rem = capacity%1000;
		capacity/=1000;
		for(i=0;i<d;i++){
			cin >> weight[i] >> values[i];
			weight[i]/=1000;
		}
		for(i=1;i<=n;i++){
			ans = findMaxValue(weight,values,d,capacity);
			capacity = capacity + (ans + rem)/1000;
			rem = (ans + rem)%1000;
		}
		cout << capacity*1000+rem << endl;
	}
	return 0;
}
