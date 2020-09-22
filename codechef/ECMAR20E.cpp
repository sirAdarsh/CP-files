#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		int n,k;
		cin>>n>>k;
		int t;
		for(int i=1;i<=n;i++){
			cin>>t;
			ans+= (t%k);
		}
		cout<<ans<<endl;
		
	}
}
