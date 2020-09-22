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
    	int a[n],b[n];
    	
    	unordered_map<int,int> ma,mb;
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    		ma[a[i]]++;
		}
		for(int i=0; i<n; i++){
    		cin >> b[i];
    		mb[b[i]]++;
		}
    	int steps=0;
    	bool e =false;
    	for(auto i : ma){
    		if(i.second!=0){
    			int diff = abs(ma[i.first]-mb[i.first]);
	    		if(diff%2){
	    			cout << -1 << endl;
	    			e=true;
	    			break;
				}
				else{
					steps += (diff/2);
					mb[i.first]=0;
				}
			}
    	
	}
		
    	if(!e){
    		cout << steps << endl;
		}
    	
    	
	}

}

