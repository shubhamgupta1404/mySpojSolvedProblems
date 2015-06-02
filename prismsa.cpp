#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,v;
	double s,temp,trigo;
	cin >> t;
	while(t--){
		cin >> v;
		temp = cbrt(4*v);
		trigo = sqrt(3.0)/2.0;
		s = (pow(temp,2)*trigo) + (6*v/(temp*trigo));
		printf("%.10lf\n",s);
	}
	return 0;
}
