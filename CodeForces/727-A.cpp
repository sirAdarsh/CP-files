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
    
    int a,b;
    cin >> a >> b;
    vector<int> vec;
    
    while(1){
    	vec.push_back(b);
    	
    	if(b==a){
    		break;
		}
		if(b<a){
			cout << "NO";
			return 0;
		}
    	
    	if(b%2){
    		if(b%10==1){
    			b /= 10;	
			}
			else{
				if(b!=a){
					cout << "NO"<<endl;
					return 0;
				}	
			}
		}
		else{
			b/=2;
		}
    	
	}
	reverse(vec.begin(),vec.end());
	cout << vec.size()<<endl;
	for(auto i : vec){
		cout << i << ' ';
	}
    
}

