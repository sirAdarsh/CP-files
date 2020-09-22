/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int n,k;
string s;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
 	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cin >> s;
		s = "0"+s;
		
		int ans=0;
		
		vector<int> arr;
		arr.push_back(0);
		int p=0;
		cout << s << endl;
		int sz = s.size();
		for(int i=1; i<=n; i++){
			p+=(s[i]-'0');
			arr.push_back(p);
		}
		
		for(int i=1; i<=n; i++){
			cout << arr[i]<<" ";
		}
		cout<<endl;
		for(int i=1; i<=n; i++){
			
			int key = k - (arr[i]-arr[i-1]);
			cout <<key <<" ";
			
			auto it1 = arr.begin();
			auto it2 = it1;
			
			it1 = lower_bound(arr.begin(), arr.end(), key);
			it2 = upper_bound(arr.begin(), arr.end(), key);
			
			if(it1!=arr.end()){
				if(*it1==key){
					if(it2!=arr.end()){
						cout <<it2-arr.begin()<<"    ";
						ans += ( (it2-arr.begin()) - i -1);
					}
					else{
						cout <<"two  ";
						ans +=  (n + 1 - (it1-arr.begin())  );
					}
				}
			}
			cout << ans << endl;
			
		}
		cout << ans << endl;
		
	}
	    
}

