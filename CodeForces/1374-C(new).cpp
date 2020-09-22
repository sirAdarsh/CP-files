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
		
		cout << close.size()<<endl;
    	
	}
    
}

