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
    
    int n,k;
    cin >> n >> k;
    
    int arr[n], tmp[n];
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	tmp[i]=arr[i];
	}
	
	sort(tmp,tmp+n,greater<>());
	
	int minn = tmp[k-1];
	
	cout << minn << endl;
	
	for(int i=0; i<n; i++){
		if(k==0) break;
		if(arr[i]>=minn){
			cout << i+1 << ' ';
			k--;
		}
	}
    
}

