#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		int a, b, x;
		cin >> a >> b >> x;
		
		int num = pow(a,b);
		int j = num % x;
		
		if( j <= x/2 ){
			
			cout<< num-j <<endl;
			
		}else{
			cout<<num+(x-j)<<endl;
		}
		
//		cout<< num - j <<endl;
		
	}
	
}
