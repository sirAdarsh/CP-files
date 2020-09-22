#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int x;
		
		int k = 2;
		while( ( n % ((1<<k) - 1 )) ) {
			k++;
		}
		int ans = n/((1<<k)-1);
		cout<<ans<<endl;
		
	}
}
