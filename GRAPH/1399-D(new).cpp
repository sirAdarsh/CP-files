/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    
    while(t--){
    	int n;
    	cin >> n;
    	
    	cin >> s;
    	
		vector<int> pos(n);
    	
    	stack<int> lastZero;
    	stack<int> lastOne;
    	
    	int curr_subs=0;
    	int max_subs = curr_subs;
    	
    	for(int i=0; i<n; i++){
    		
    		if(s[i]=='0'){
    			if(lastOne.size()==0){
    				max_subs++;
    				pos[i] = max_subs;
    				lastZero.push(max_subs);
				}
				else{
					curr_subs = lastOne.top();
					lastOne.pop();
					pos[i] = curr_subs;
					lastZero.push(curr_subs);
				}
			}
			else{
				
				if(lastZero.size()==0){
					max_subs++;
					pos[i] = max_subs;
					lastOne.push(max_subs);
				}
				else{
					curr_subs = lastZero.top();
					lastZero.pop();
					pos[i]=curr_subs;
					lastOne.push(curr_subs);
				}
			}
    		
		}
		
		cout << max_subs<< endl;
		
		for(int i=0; i<n; i++){
			
			cout << pos[i] << ' ';
		}
    	cout << endl;
	}
    
}

