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
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	
	int maxx =0;
	
	for(int i=0; i<n; i++){
		int tmpXor = arr[i];
		maxx = max(maxx,tmpXor);
		for(int j=i+1; j<n; j++){
			tmpXor^=arr[j];
			maxx=max(maxx,tmpXor);
		}
	}
    cout << maxx;
}

