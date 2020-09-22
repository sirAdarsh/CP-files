/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

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

vector<pair<int,int>> ZeroOne(20);

void checkArray(vector<int> arr, int n) 
{ 
	int Z=0,O=0;
	for (int i = 0; i < n; i++) {
		
		Z += ZeroOne[arr[i]].first;
		O += ZeroOne[arr[i]].second;
		
    }
    if(Z==O){
    	ans++;
	}
} 
  
void check(vector<int> arr, int index, vector<int> subarr) 
{ 
    if (index == arr.size()) 
    { 
        int l = subarr.size(); 
  
        if (l != 0) 
        checkArray(subarr, l); 
    } 
    else
    { 
        check(arr, index + 1, subarr); 
  
        subarr.push_back(arr[index]); 
  
        check(arr, index + 1, subarr); 
    } 
    return; 
} 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int maxx=0;
    int arr[n];
    
    vector<int> vec(n);
    
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	maxx = max(maxx,arr[i]);
    	vec[i]=i;
	}
	
	int firstSetBit=0;
	
	s = bitset<16>(maxx).to_string();
	
	for(int i=0; i<16; i++){
		if(s[i]=='1'){
			firstSetBit=i;
			break;
		}
	}
	
	int num;
	
	for(int i=0; i<n; i++){
		num = arr[i];
		s = bitset<16>(arr[i]).to_string();
		int zero=0,one=0;
		
		for(int i=firstSetBit; i<16; i++){
			if(s[i]=='0') zero++;
			else one++;
		}
		
		ZeroOne[i]={zero,one};
		
	}
	
    vector<int> b;
	check(vec,0,b);
//	cout << ans << endl;

	s = bitset<16>(ans).to_string();
	for(int i=firstSetBit; i<16; i++){
		cout << s[i];
	}
    
}

