/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int mp[10];
    memset(mp,-1,sizeof(mp));
    mp[2]=1;
    mp[3]=7;
    mp[4]=4;
    mp[5]=5;
    mp[6]=9;
    mp[7]=8;
    
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vector<int> num;
    	
    	while(1){
    		bool e =false;
    		for(int i=1; i<10; i++){
    			if(mp[i]!=-1 && n>=i){
    				e=true;
    				num.push_back(mp[i]);
    				n = n-i;
    				break;
				}
			}
    		if(!e){
    			break;
			}
		}
    	
    	reverse(num.begin(), num.end());
    	for(auto i : num){
    		cout << i << ' ';
		}
    	
	}
    
}

