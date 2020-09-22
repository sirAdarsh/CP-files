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
    
    string s;
    cin >> s;
    
    int sz= s.size();
    string sr=s;
    for(int i=0; i<sz/2; i++) swap(sr[i],sr[sz-1-i]);
	
	int m;
	cin >> m;
	
	vector<int> arr;
	
	unordered_map<int,int> count;
	
	for(int i=1; i<=m; i++){
		int tmp;
		
		cin >> tmp;
		tmp--;
		if(count[tmp]==0){
			arr.push_back(tmp);
		}
		count[tmp]++;
	}
	sort(arr.begin(), arr.end());
	
    int q = 0;
    
    
    int szz = arr.size();
    
    
    string ans(sz,'*');
    int nxt;
    int i=0;
//    cout << ans << endl;
    
//    for(auto i : arr){
//    	cout << i << " ";
//	}cout << endl;
    
    	for(i=0; i<szz; i++){
    		
    		if(i==szz-1){
    			
    			q += count[arr[i]];
    			if(q%2){
    				for(int j=arr[i]; j<=sz-1-arr[i]; j++){
    					ans[j]=sr[j];
					}
				}
				else{
					for(int j=arr[i]; j<=sz-1-arr[i]; j++){
						ans[j]=s[j];
					}
				}
				
				
//				cout << endl;
				
    			break;
			}
    
	    	q += count[arr[i]];	  
//			cout <<"q = "<<q << endl;  	
	    	if(q%2){
	    		nxt = arr[i+1];
	    		for(int j=arr[i]; j<nxt; j++){
	    			ans[j]=sr[j];
	    			ans[sz-1-j]=sr[sz-1-j];
				}
				
//				cout << ans << endl;
				
			}
			else{
				nxt = arr[i+1];
				for(int j=arr[i]; j<nxt; j++){
					ans[j]=s[j];
					ans[sz-1-j]=s[sz-1-j];
				}
				
//				cout << endl;
				
			}
	    	
		}
		
		for(int i=0; i<sz; i++){
			if(ans[i]=='*') ans[i]=s[i];
		}
    
	
	cout << ans << endl;
    
}

