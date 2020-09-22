/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

void solve(string s1, string s2, int n){
	
    	unordered_map<char,int> m; //char in s1 , its index
    	
    	unordered_map<char,int> alphaCovered;
    	
    	for(int i=0; i<n; i++){
    		if(m.find(s1[i])==m.end()){
    			m[s1[i]] = i;
//    			cout<<i<<endl;
			}
		}
		
		int top = 0;
		
		
		for(int i=0; i<n; i++){
    		if( m.find(s2[i]) == m.end() ){
    			cout<<-1<<endl;
    			return;
			}
		
			if( alphaCovered.find(s2[i]) == alphaCovered.end() ){
				
//				cout << s2[i]<<" "<<s1[i]<<endl;
				
				if( s2[i]!=s1[i] ){
					top++;
					alphaCovered[s2[i]] = 1;
				}
				
				
			}
			
			
		}
	
		
		cout << "top = "<<top <<endl;
    	
    	for(int j=97; j<=122; j++){
    		
    		bool misMatch = false;
    		
    		char ch = j;
    		
    		vector<int> indeces1;
    		
    		for(int i=0; i<n; i++){
    			
    			if( s2[i]== ch ){
    				
    				if( s2[i] != s1[i] ){	
    					misMatch = true;
    					indeces1.push_back(i);
					}
				}
			}
			if(misMatch){
				cout<<"hre";
				cout <<  indeces1.size() <<" " << m[ch]<< " ";
				for(auto i : indeces1){
					cout<<i<<" ";
				} 
			}
			
    	}
		 	
}


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
    	solve(s1,s2,n);
    	
	}
}

