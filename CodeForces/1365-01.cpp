/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
typedef unordered_map<int,bool> ma;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	bool arr[n][m];
    	
    	for(int i =0; i<n; i++){
    		for(int j=0; j<m; j++){
    			cin >> arr[i][j];
			}
		}
		int chance = 0;
		
		for(int i=0; i<n; i++){
			for(int j =0; j<m; j++){
				
				if( arr[i][j] == 0 ){
					
					bool found = false;
					
					for(int k=0; k<n; k++){
    					if(arr[k][j]==1){
    						found=true;
    						break;
						}
					}
					for(int k =0; k<m; k++){
						if(arr[i][k]==1){
							found=true;
							break;
						}
					}
					
					if(!found){
						chance++;
						arr[i][j]=1;
					}
					
				}
				
			}
		}
		if(chance%2){
			cout << "Ashish"<<endl;
		}
		else{
			cout << "Vivek"<<endl;
		}
		
	}
}

