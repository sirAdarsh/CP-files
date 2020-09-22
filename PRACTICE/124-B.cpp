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

int MAX = 1e9;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,k;
    cin >> n >> k;
    
    vector<string> vec;
    for(int i=0; i<n; i++){
    	cin >> s;
    	vec.push_back(s);
	}
 	   
    int ar[k];
    for(int i=0; i<k; i++){
    	ar[i]=i;
	}
	
	int diff = 2*MAX;
	
	do{
		
		int maxi = -1*MAX;
		int mini = MAX;
			
		for(int i=0; i<n; i++){
			
			s = vec[i];
			
			int num=0;
			
			for(int j=0; j<k; j++){
				num += ( pow(10,ar[j])*(s[j]-'0') );
			}
			maxi = max ( maxi,num );
			mini = min ( mini, num );
		}
		
			diff = min(diff,(maxi-mini));
	}
	while(next_permutation(ar,ar+k));
    cout << diff << endl;
    
}

