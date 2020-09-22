#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    stack<int> openBracePos; //stacks the position of the open brace
    
    int dp[n+1]={};
    
    for(int i=0; i<s.size(); i++){
    	
    	if(s[i]=='('){
    		openBracePos.push(i);
		}
		
		if(s[i]==')'){
			if( openBracePos.empty() == true ){
				dp[i] = -1;	
			}		
			else{
				openBracePos.pop();
			}
		}
    	
	}
	vector<int> vec; //stores all the position which where the brace acts as a disjunction
	 
	// If there is remained any unpaired open brace, mark theis pos as disjunction  
	  
	while(!openBracePos.empty()){ 
		vec.push_back(openBracePos.top());
		openBracePos.pop();
	}
	
	// dp[-1] means the position where the breace is a closed brace and is unpaired
	
	for(int i=0; i<n+1; i++){
		if(dp[i]==-1){
			vec.push_back(i);
		}
	}
	vec.push_back(n);
    sort(vec.begin(),vec.end());
    
    vector<int> diffs;
    
    int maxDiff= 0;
    
    unordered_map<int,int> m;
    
    for(auto i = vec.begin(); i!=vec.end(); i++){
		int diff;
		if(i!=vec.begin()){
			diff = *i - *(i-1);
			m[diff-1]++;
			if(diff-1 > maxDiff){
				maxDiff = diff-1;
			}
		}
			
	}
	
	if(vec.size()==1 && vec[0]==n){
		cout<<n<<" "<<1<<endl;
	}
	else{
		if(maxDiff==0){
    		cout<<0<<" "<<1<<endl;
		}
		else{
			cout<<maxDiff<<" "<<m[maxDiff]<<endl;
		}
	} 
}

