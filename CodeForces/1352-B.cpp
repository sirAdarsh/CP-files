#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n,k;
	
		
		cin >> n >> k;
		
		if( n < k ){
			cout<<"NO"<<endl;
		}
		
		else if(k==1){
			cout<<"YES"<<endl;
			cout<<n<<endl;
		}
		
		else{
			
			vector<int> ans;
			
			if( k%2 != 0 ){
				
				if( n%2 == 0 ){
					
					while(k!=1){
						ans.push_back(2);
						k--;
						n-=2;
						if(n<2){
							cout<<"NO"<<endl;
							break;
						}
					}
					if(n>=2){
						for(auto i : ans){
							cout<<i<<" ";
						}
						cout<<n<<endl;
					}
					
				}
				else{
					
					while(k!=1){
						ans.push_back(1);
						k--;
						n--;
						if(n<1){
							cout<<"NO"<<endl;
							break;
						}
					}
					if(n>=1){
						for(auto i : ans){
							cout<<i<<" ";
						}
						cout<<n<<endl;
					}
					
				}
				
				
			}
			
			else{
				
				
				if(n%2!=0){
					cout<<"NO"<<endl;
				}
				
				else{
					
					while(k!=1){
						ans.push_back(1);
						k--;
						n--;
						if(n<1){
							cout<<"NO"<<endl;
							break;
						}
					}
					if(n>=1){
						for(auto i : ans){
							cout<<i<<" ";
						}
						cout<<n<<endl;
					}
					
					
				}
				
				
			}
			
			
		}
		
			
			
		
		
		
		
	}
}
