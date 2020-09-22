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
    	int n,k;
    	cin >> n >> k;
    	int arr[n];
		unordered_map<int,int> mp;
    	for(int i=0; i<n; i++){
    		int tmp;
    		cin >> tmp;
    		arr[i] = k%tmp;
    		mp[arr[i]]++;
		}
		
		sort(arr,arr+n);
		
		int xx=0;
		
		int curr=0;
		int steps=0;
		
		
		
		cout << endl;
		for(int i =0; i<n; i++){
			cout << arr[i] <<" ";
		}
		cout << " "<<endl;
		
		for(int i=0; i<n; i++){
			
			if(mp[arr[i]]==1){
				steps += (arr[i]-curr);
				curr = arr[i]+1;
			}
			
			else if( mp[arr[i]]>1 ){
				
				int num = mp[arr[i]]-1;
				xx = max( xx  ,num);
				steps += (arr[i]-curr);
				curr = arr[i]+1;
			}
			
		}
		cout << "steps = "<<steps<<" xx = "<<xx;
		
		
	}
    
}

