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
    
    
    
    
    int n,m;
    cin >> n >> m;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
    	cin >> vec[i];
	}
    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i++){
    	cout <<  vec[i] <<" ";
	}
	cout << endl;
    
    cout << vec[0]<<" ";
    
    int prev=vec[0];
    int prevK=1;
    int cnt=1;
    
    for(int i=2; i<=n; i++){
    	
		if(cnt%2==0){
			prevK++;
			prev = prev + (prevK*vec[i-1]);
		}	
    	else{
    		prev = prev + (prevK*vec[i-1]);
		}
		cnt++;
		cout << prevK <<" " << vec[i-1] <<" ";
		cout << prev <<endl;
	}
    
    
    
}

