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
    	int arr[n];
    	
    	unordered_map<int,int> mp;
    	mp.clear();
    	
    	int highest=-1;
    	bool e=false;
    	
    	
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
    		mp[arr[i]]++;
    		if(arr[i]>highest) highest=arr[i];
    		if(mp[arr[i]]>2) {
    			e=true;
			}
		}
		
		sort(arr,arr+n);
	
		if(e==true || mp[highest]>1 ){
			cout <<"NO"<<endl;
		}
		else{
			cout <<"YES"<<endl;
			vector<int> vec;
			
			unordered_map<int,bool> in;
			in.clear();
			
			for(int i=0; i<n; i++){
				if(in[arr[i]]==0 && mp[arr[i]]!=0 ){
					vec.push_back(arr[i]);
					in[arr[i]]=1;
					mp[arr[i]]--;
				}
			}
			
			for(int i=n-1; i>=0; i--){
				
				if(mp[arr[i]]!=0){
					vec.push_back(arr[i]);
					mp[arr[i]]--;
				}
				
			}
			for(auto i : vec){
				cout <<i <<" ";
			}
			cout << endl;
			
			
		}
		
		
	}
    
}

