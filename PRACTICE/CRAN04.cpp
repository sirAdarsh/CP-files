/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;
string s;
int n,k;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int t;
    cin>>t;
    while(t--){
    	cin >> n >> k;
    	cin >> s;
    	s = "0"+s;
    	
    	int ans=0;
    	
    	vector<int> arr;
    	int p=0;
    	arr.push_back(0);
    	for(int i=1; i<=n; i++){
			p+=(s[i]-'0');
			arr.push_back(p);
		}
//		for(auto i : arr){
//			cout << i <<" ";
//		}cout<<endl;
		int sz=arr.size();
    	
    	for(int i=1; i<sz; i++){
    		int key =  k + (arr[i-1]);
//    		cout << key << endl;

			auto it1 = arr.begin();
			auto it2 = it1;
			
			it1 = lower_bound(arr.begin()+i-1, arr.end(), key);
			it2 = upper_bound(arr.begin()+i-1, arr.end(), key);
			
			if(it1!=arr.end()){
				
				if(it2!=arr.end()){
					ans += ( (it2-arr.begin())-(it1-arr.begin()) );  
				}
				else{
					ans += ( sz - (it1-arr.begin()) );
				}
				
			}
//			cout << ans << endl;
		}
		cout << ans << endl;
    	
	}
    
}

