#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	return b?(gcd(b,a%b)):a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		
		int G ;
		
		if(n==1){
			cout<<"NO"<<endl;
		}
		else{
			G = gcd(arr[0],arr[1]);
		
			for(int i=2;i<n;i++){
				G = gcd(G,arr[i]);
			}
		}
		
		cout<<G<<endl;
		bool e =false;
		for(int i=0;i<n;i++){
			
			if(arr[i]==G && G!=1){
				cout<<"NO"<<endl;
				e= true;
				break;
			}
			
		}
		if(!e){
			cout<<"YES"<<endl;
		}
		 
		
	}
}

