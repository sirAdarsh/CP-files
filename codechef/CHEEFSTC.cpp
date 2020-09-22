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
    	
    	int arr[4];
		for(int i=0; i<4; i++){
			cin >> arr[i];
		}    	
    	
    	int total = 15;
    	bool e =false;
    	
    	for(int i=1; i<total; i++){
    		
    		int sum = 0;
    		
    		for(int j=0 ; j<4; j++){
    			
    			int ch = 1 << j;
    			
    			if( (ch & i)!=0 ){
    				sum += arr[j];
				}
			}
			if(sum==0){
				cout<<"Yes"<<endl;
				e = true;
				break;
			}
    		
		}
		if(!e){
			cout<<"No"<<endl;
		}
    	
	}
    
}

