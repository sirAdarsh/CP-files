/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,d;
    cin >> n >> d;
    
    vector<int> vec(n);
    for(int i=0; i<n; i++){
    	cin >> vec[i];
	}
	
	int ans=0;
	
	for(int i=0; i<n; i++){
		
		int pos;
		
		auto it = upper_bound(vec.begin(), vec.end(), vec[i]+d);
		if(it!=vec.end()){
			pos = (it-vec.begin()-1);
			cout << "i  = " <<i << "  pos = " << pos << endl;
			if(pos>1){
				ans += ( (pos-i) *(pos-i-1)/2);
			}
		}
		else{
			pos = n-1;
			cout << "i  = " <<i << "  pos = " << pos << endl;
			if(pos>1){
				ans += ( (pos-i) *(pos-i-1)/2);
			}
		}
		
	}
    cout << ans;
}

