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

int minOfThree(int a, int b, int c){
	a = min(a,b);
	return min(a,c);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    int one=0, two=0, three=0;
    for(int i=0; i<n; i++){
    	cin >> t;
    	if(t==1) one++;
    	elif(t==2) two++;
    	else three++;
	}
	
	cout << minOfThree( one+two, two+three, three+one );
    
}

