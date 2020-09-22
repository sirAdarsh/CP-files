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
    	
    	int sz=s.length();
    	
    	int tmp=0;
    	bool one=false, zero =false;
    	int j=-1;
    	for(int i=0; i<sz; i++){
    		
    		if(s[i]=='1'){
    			
    			if(!one){
    				j=i;
				}
    			
    			if(one && zero){
    				
    				s.erase(j,tmp);
    				s = "0"+s;
    				tmp=0;
    				zero=false; one=false;
    				
				}
    			tmp++;
    			one=true;
			}
			else{
				if(one){
					tmp++;
					zero=true;
				}
				
			}
    		
		}
		cout<<tmp<<endl;
		if(one && zero){
//			s.erase(j,tmp);
			s = "0"+s;
		}
		
		
    	cout<<s<<endl;
	}
    
}

