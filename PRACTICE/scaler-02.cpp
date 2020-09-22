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
    
    cin >> s;
    int n = s.size();
    
    int zero[n+1];
    zero[0]=0;
    
    
    for(int i=1; i<=n; i++){
    	
    	if(s[i-1]=='0'){
    		zero[i]=zero[i-1]+1;
		}
		else{
			zero[i]=zero[i-1];
		}
    	
	}
	
	int l,r;
	cin >> l >> r;
	
	int left=-1, right=-1;
	
	for(int i=l-1; i<r-1; i++){
		if(s[i]=='1'){
			left=i+1;
			break;
		}
	}
	for(int i=r-1; i>=l-1; i--){
		if(s[i]=='1'){
			right=i+1;
			break;
		}
	}
	cout << left << " " << right << endl;
	if(left==-1 || right==-1){
		cout << 0 << endl;
	}
	
	else{
		
		cout << zero[right]-zero[left] << endl;
		
	}
    
}

