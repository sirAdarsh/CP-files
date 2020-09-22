#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b){
	return a?gcd(b%a,a):b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		ll arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		ll ans=0,ansP;
		for(int i=0;i<size;i++){
			ansP=arr[i];
			for(int j=i;j<size;j++){
				ansP=ansP&arr[j];
				ans=ans&ansP;
			}
		}
	
		if(gcd(1000000007,ans)==1){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
