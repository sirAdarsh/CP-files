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
    	ll n;
    	cin >> n;
    	unordered_map<int,int> m;
    	int a[n],b[n];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		m[a[i]]++;
		}
		for(int i=0; i<n; i++){
			cin >> b[i];
			m[b[i]]++;
		}
		bool e =false;
		vector<int> vec;
		for(auto i : m){
			
			if(m[i.first]%2){
				e=true;
				cout<<-1<<endl;
				break;
			}
			
			int num = m[i.first]/2;
			for(int j=0; j<num; j++){
				vec.push_back(i.first);
			}
			
		}
		sort(vec.begin(), vec.end());
		for(auto i : vec){
			cout << i <<" ";
		}
//		sort(arr,arr+n);
		
		
	}
    
}

