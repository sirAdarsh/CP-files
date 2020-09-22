#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
    	
    	string s;
    	cin >> s;
    	
    	unordered_map<char,int> m;
    	
    	vector<int> sizes;
    	
    	for(int i=0; i<s.size(); i++){
    		
    		if(s[i]=='1'){
    			m['1']=i;
			}
			else if(s[i]=='2'){
				m['2']=i;
			}
			else if(s[i]=='3'){
				m['3']=i;
			}
			if( m.size()==3 ){
				int maxm,minm;
				maxm = max( max(m['1'], m['2']),m['3'] );
				minm = min( min(m['1'], m['2']),m['3'] );
				int size = maxm-minm+1;
				sizes.push_back(size);
			}
    		
		}
		if(sizes.size()==0){
			cout<<0<<endl;
		}
		
		
		else{
			int ans = *min_element(sizes.begin(),sizes.end());
			cout<<ans<<endl;
		}
		
	}
    
}

