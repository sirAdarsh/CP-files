#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		bool end=false;
		int x,n,m;
		cin >> x >> n >> m;
		
		
		
		
		while(true){
			
//			if(x<=20){
//				break;
//			}
			
			if(n==0){
				break;
			}
			
			x = (x/2)+10;
			n--;
			
			if(x<=0){
				cout<<"YES"<<endl;
				end=true;
				break;
			}
		}
		if(end==false){
			
			while(true){
				if(m==0){
					cout<<"NO"<<endl;
					break;
				}
				
				x-=10;
				m--;
				if(x<=0){
					cout<<"YES"<<endl;
					break;
				}
				
			}
			
		}
		
		
	}
	
}
