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
    	int n;
    	cin >> n;
    	string s1, s2;
    	cin >> s1 >> s2;
    	
		
		if(s1==s2){
			cout << 0 <<endl;
			continue;
		}
		
		bool e = false;
		
		vector<int> vec;
		
		for(int i=0; i<n ; i++){
			
				
				if( s2[i] == 'b' && s1[i] =='a' ){
					cout << -1 <<endl;
					e = true;
					break;
				}
				else if( s2[i] == 'a'){
					vec.push_back(i);
				}	
		}    	
    	if( !e ){
    		cout <<  1 << endl; 
    		
    		if(vec.size()==1){
    			cout << -1;
			}
    		else{
    			cout << vec.size()<<" ";
    			for(auto i : vec){
    				cout<<i<<" ";
				}
			}
    		
			cout<<endl;
		}
    	
	}
    
}

