#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		float r;
		float c;
		cin >> r >> c;
		
		int i=1;
		int ans=0;
		
		if(r==1){
			cout<<ceil(c/2)<<endl;
		}else if(c==1){
			cout<<ceil(r/2)<<endl;
		}
		else{
			
			
			while(i<=r){
				
				if(i%2==1){
					ans += (int)c;
					i++;
				}else if(i%2==0){
				
					ans +=((int)c - (int)c/2);
					i++;
				
				}
			
			}
			cout<<ans<<endl;
		}
		
		
	}
}
