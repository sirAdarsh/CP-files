#include<iostream>
using namespace std;
int main(){
	int n,x;
	cin >> n >> x;
	
	int curr=1;
	int l,r;
	int ans=0;
	
	while(n--){
		cin >> l >> r;
		
		int d = (l-curr)%x;
		ans = ans + d +(r-l+1);
		curr=r+1;
	}
	
	cout<<ans<<endl;
}
