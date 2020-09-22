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
    
    int m,n;
    cin >> m >> n;
    
    vector<int> arr;
    for(int i=0; i<m; i++){
    	cin >> t;
    	if(t<0) arr.push_back(t);
	}
	int sum=0;
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<arr.size(); i++){
		if(n==0) break;
		sum += abs(arr[i]);
		n--;
	}
    cout << sum;
}

