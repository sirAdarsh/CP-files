/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n,x;
    	cin >> n >> x;
    	
    	int odds=0, evens=0;
		
		for(int i=0; i<n; i++){
			int p;
			cin >> p;
			if(p%2){
				odds++;
			} 
			else{
				evens++;
			}
		}
		
		if(odds==0){
			cout<<"No"<<endl;
		}
		
		else{
			odds--;
		
			x--;
			
			
			if(odds!=0){
				
				if(odds%2){
					odds--;
				}
				
				if(x%2==0){
					x -= odds;
				}
				
				else{
					
					if( odds < x ){
						x -= odds;
					}
					else{
						x = 1;
					}
					
				}
				
			}
			
			
			
			if(x<=0){
				cout <<"Yes"<<endl;
			}
			else{
					
					x -= evens;
		
					if(x <=0){
					cout <<"Yes"<<endl;
					}
					else
					cout <<"No"<<endl;
			}
			
		}
		
	}
}

