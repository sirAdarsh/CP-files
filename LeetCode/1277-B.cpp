/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int check(int n){
	
	int count = 0;
	
	while(n!=0){
		n>>=1;
		if(n&1) count++;
		if(count>1){
			return -1;
		}
	}
	
	return true;
}

int find(int n){
	int r=0;
	while((n&1)==0){
		n>>=1;
		r++;
	}
	return r;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
//    cout << find(18)<<endl;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int arr[n];
    	for(int i=0; i<n; i++){
    		cin >> arr[i];
		}
		set<int> st;
		for(int i=0; i<n; i++){
			if(arr[i]%2==0){
				st.insert(arr[i]);
			}
		}
		if(st.empty()){
			cout << 0 << endl;
			continue;
		}
		int ans=0;
		
		vector<int> tmp;
		for(auto i : st) tmp.push_back(i);
		sort(tmp.begin(),tmp.end(), greater<>());
		
		vector<int> final;
		
		for(int i=0; i<tmp.size(); i++){
			
			bool tool=false;
			
			for(int j=i+1; j<tmp.size(); j++){
				
				if(tmp[i]%tmp[j]==0 && check(tmp[i]/tmp[j]) ){
					ans += pow(2,find(tmp[i]/tmp[j]));
					tool = true;
					break;
				}
			}
			if(!tool){
				final.push_back(tmp[i]);
			}
			
		}
		
		for(auto i : final){
			ans += (find(i));
		}
		cout << ans << endl;
	}
    
}

