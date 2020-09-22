#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int ans=0;
	while(t--){
		int a;
		int sum=0;
		for(int i=0;i<3;i++){
			cin>>a;
			sum+=a;
		}
		if(sum>1){
			ans++;
		}
	}
	cout<<ans<<endl;
}
