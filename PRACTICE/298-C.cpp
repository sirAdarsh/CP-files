/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    string s1, s2;
    cin >> s1 >> s2;
    
    string buildS2 ="";
    
    bool diff=false;
    
    for(int i=s2.size()-1; i>=0; i--){
    	if(!diff){
    		if(s2[i]!='0'){
    			diff=true;
			}
		}
    	if(diff){	
    		buildS2 += s2[i];
		}
	}
    
    reverse(buildS2.begin(), buildS2.end());  // 0110
    int sz = buildS2.size();
    
    bool found = false;
    
    
    if(s1.size()>=sz){
    	if( s1.substr( s1.size()-sz, sz ) == buildS2 ){
	    	found=true;
		}
	}
    
	cout << buildS2 << endl;
	
	if(!found){
		
		buildS2.erase( buildS2.size()-1,1 );
		sz-=1;
		
		if(s1.size()>=sz){
			if(s1.substr( s1.size()-sz, sz ) == buildS2){
			
			int ones=0;
			for(int i=s1.size()-sz; i<s1.size(); i++){
				if(s1[i]=='1') ones++;
			}
			if(ones&1) found = true;
				
			}
		}
		
	}
	
	if(found){
		cout <<"YES" << endl;
	}
	else{
		cout << "NO" << endl; 
	}
    
}

