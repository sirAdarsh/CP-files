#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int a,b,c,d;
		cin >> a >> b >> c >>d;
		
		int A,M,O;
		
		A = (a-b+c)/2;
		
		M = a- A;
		
		O = c - A;
		cout<<A<<" "<<M<<" "<<O<<endl;
	}
}
