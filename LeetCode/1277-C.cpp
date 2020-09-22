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
    	string s;
    	cin >> s;
    	int sz = s.size();
    	s += "pppp";
    	
    	vector<int> vec;
    	
    	for(int i=0; i<sz-2; i++){
    		
    		if(s[i]=='t' && s[i+1]=='w' && s[i+2]=='o'){
    			if(s[i+3]=='n' && s[i+4]=='e' ){
    				vec.push_back(i+2+1);
    				i=i+4;
				}
				else{
					vec.push_back(i+1+1);
					i=i+2;
				}
			}
			else if(s[i]=='o' && s[i+1]=='n' && s[i+2]=='e'){
				vec.push_back(i+1+1);
				i=i+2;
			}
    		
		}
    	
    	cout << vec.size() << endl;
    	for(auto i : vec){
    		cout << i <<" ";
		}
		cout << endl;
    	
	}
    
}

