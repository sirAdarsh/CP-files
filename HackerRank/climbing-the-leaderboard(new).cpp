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
    
    int n;
    cin >> n;
    set<int> st;
    for(int i=0; i<n; i++){
    	int t; cin>>t;
    	st.insert(t);
	}
    
    vector<int> arr;
    for(auto i : st){
    	arr.push_back(i);
	}
	
	reverse(arr.begin(),arr.end());
	
    for(auto i : arr){
    	cout << i << " ";
	}cout<<endl;
	int m;
	cin >> m;
	int quer[m];
	for(int i=0; i<m; i++){
		cin >> quer[i];
	}
	
	int pos=0;
	vector<int> ans;
	
	int q;
	int i=arr.size()-1;
	for(int j=0; j<m; j++){
		q = quer[j];
		for(; i>=0; i--){
			if(q<arr[i]){
				break;
			}
		}
		ans.push_back(i+2);
	}
	
	for(auto i : ans ){
		cout << i <<" ";
	}
	
}

