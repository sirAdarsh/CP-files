/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
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
    	string s;
    	cin >> s;
    	
    	stack<int> st;
    	
    	vector<int> close;
    	
    	for(int i=0; i<s.size(); i++){
    		
    		if( s[i]=='(' ){
    			st.push(i);
			}
			else{
				
				if(st.size()!=0){
					st.pop();
				}
				else{
					close.push_back(i);
				}
			}
		}
    	
    	int count=0;
    	
    	vector<int> open;
    	while(st.size()){
    		open.push_back(st.top());
    		st.pop();
		}
		
		int a,b;
		a = close.size();
		b = open.size();
		
		
		for(int i=0; i<open.size(); i++){
			if(open[i]==0){
				a--;
				b--;
				if(b>0){
					count++;
				}
				break;
			}
		}
		
		for(int i=0; i<close.size(); i++){
			if(close[i]==n-1){
				b--;
				a--;
				if(a>0){
					count++;
				}
				break;
			}
		}
		
		if(a>0 && b>0){
			count += (2*a);
		}
		
		cout << count << endl;
    	
	}
    
}

