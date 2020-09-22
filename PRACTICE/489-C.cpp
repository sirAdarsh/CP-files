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
    
    int m,s;
    cin >> m >> s;
    
    int secondry_digs = m-1;
    
    int minSum=1;
    int maxSum = 9*m;
    
    if(m==1 && s<9){
    	if(s<9){
    		cout << s << ' ' << s << endl;
		}
		else{
			cout << -1 << ' ' << -1 << endl;
		}
    	return 0;
	}
    
    if(s<minSum || s>maxSum){
    	cout << -1 << ' ' << -1 << endl;
    	return 0;
	}
	
	// MINIMUM
	int maxSumSecondry = secondry_digs*9;
	
	int firstDig = max( 1, s-maxSumSecondry );
	int rem = s-firstDig;
	
	vector<int> places(m);
	
	for(int i=m-1; i>0; i--){
		places[i] = min( 9, max(0, rem) ) ;
		rem -= places[i];
	}
	places[0] = firstDig;
	
	for(int i=0; i<m; i++){
		cout << places[i];
	}
	
	cout << ' ';
	
	// MAXIMUM
	firstDig = min(9, s);
	places[0] = firstDig;
	rem = s-firstDig;
	
	for(int i=1; i<m; i++){
		places[i] = min( 9, max(0,rem) );
		rem -= places[i];
	}
	for(int i=0; i<m; i++){
		cout << places[i];
	}
	
    
}

