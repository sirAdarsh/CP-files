/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    ll n,k;
    cin >> n >> k;
    
    string s;
    cin >> s;
    
    float nn = (float)n;
    
    ll num=0;
    char lastNum;
    
	string nm="";
	for(int i=0; i<k; i++){
		nm+=s[i];
	}
	num = stol(nm);
	
	lastNum = nm[0];
	
	bool allGood = true;
	
	for(int i=k; i<n; i++){
		int checkIdx = i%k;
		if( s[i] > s[checkIdx] ){
			allGood = false;
		}
	}
	
	if(allGood){
		
		int times = ceil(n/k);
		
		int cnt = 0;
		cout<<n<<endl;
		for(int i=0; i<times-1; i++){
			cout << num;
			cnt += k;
		}
		
		string str;
		str = to_string(num);
		
		int p =0;
		for(int i=cnt; i<n; i++){
			cout<<str[p];
			p++;
			if(p>=k){
				p=0;
			}
		}
		
	}
	else{
		num += 1;
		int times = ceil(n/k);
		
		int cnt = 0;
		cout<<n<<endl;
		for(int i=0; i<times-1; i++){
			cout << num;
			cnt += k;
		}
		
		string str;
		str = to_string(num);
		int p =0;
		for(int i=cnt; i<n; i++){
			cout<<str[p];
			p++;
			if(p>=k){
				p=0;
			}
		}
	}
	
    
}

