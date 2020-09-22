#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    vector<pair<int,int>> nos;
    
    for(int i=0; i<s.size()-3; i++){
    	
    	if(s[i] == 'b'){
    		string str = "";
    		str += s[i];
    		str+=(s[i+1]); str+=(s[i+2]); str+=(s[i+3]);
    		if(str=="bear"){
    			nos.push_back({i+1, i+4});
    			i = (i+3)+1;
			}
		}
	}
//    for(auto i : nos){
//    	cout<<i<<" ";
//	}
	
	int sum = 0;
	for(auto i : nos){
		cout<<i.first<<" "<<i.second<<endl;
//		sum += (i.first) * ( n - i.second + 1 );
		
	}
	cout<<sum<<endl;

}

