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
    	vector<int> vec;
    	for(int i=0; i<n; i++){
    		int m; cin>>m;
    		vec.push_back(m);
		}
		
		bool e =false;
		
		for(int i=n-1; i>0; i--){
			
			if(i==1){
				if(vec[i]<=vec[i-1]){
					e=true;
				}
				break;
			}
			
			if(vec[i]>vec[i-1]){
				if(vec[i-2] < vec[i-1]){
					continue;
				}
				else if(vec[i-2] < vec[i]){
					vec[i-1]=vec[i];
				}
				else{
					e = true;
					cout<<"vec[i-1] = "<<vec[i-1]<<" vec[i] = "<<vec[i]<<endl;
					cout << "NO" << endl;
					break;
				}
			}
		}
		if(!e){
			cout <<"YES"<<endl;
		}
		
	}
    
}

