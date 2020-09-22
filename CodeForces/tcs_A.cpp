/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

 #pragma GCC optimize("Ofast")
 #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;

int ans=0;

vector<pair<int,int>> ZeroOne(25);


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int maxx=0;
    int arr[n];
    
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	maxx = max(maxx,arr[i]);
	}
	
	int firstSetBit=0;
	
	s = bitset<20>(maxx).to_string();
	
	for(int i=0; i<20; i++){
		if(s[i]=='1'){
			firstSetBit=i;
			break;
		}
	}
	
	int num;
	
	for(int i=0; i<n; i++){
		num = arr[i];
		s = bitset<20>(arr[i]).to_string();
		int zero=0,one=0;
		
		for(int j=firstSetBit; j<16; j++){
			if(s[j]=='0') zero++;
			else one++;
		}
		
		ZeroOne[i]={zero,one};
		
	}
	
	int lim = 1<<n;
	
	for(int i=1; i<lim; i++){
		
		int zeros=0,ones=0;
		
		ll tm = i;
//		cout << tm << endl;
		int p=0;
		
		while(tm){
//			cout << "tm = " << tm << endl;
			if(tm&1){
//				cout <<"  p = " << p<<' ';
			if(p<n){
				zeros += ZeroOne[p].first;
				ones += ZeroOne[p].second;
              }
			}
			tm>>=1;
			p++;
		}
//		cout << endl;
		if(zeros==ones && zeros!=0){
//			cout << "      tm was =  " << i <<endl;
			ans++;
		}
		
	}
	
	
	s = bitset<20>(ans).to_string();
	for(int i=firstSetBit; i<20; i++){
		cout << s[i];
	}
    
}

