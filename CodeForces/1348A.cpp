#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		if(n==2){
			cout<<2<<endl;
		}else{
			
			bool odd = true;
			
			ll s1=0;
			ll s2=0;
			ll arr[n+1];
			for(int i=1;i<=n;i++){
				arr[i] = pow(2,i);
				cout<<arr[i]<<" ";
			}
			cout<<en
			
			for(int i=1;i<n/2;i++){
				s1 += arr[i];
			}
			s1 += arr[n];
			for(int i=n/2;i<n;i++){
				s2 += arr[i];
			}
			cout<<abs(s1-s2)<<endl;
			
			
		}
	}
}
