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

string solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int i=0;
	int j=-1;
	
	while(i<n){
		
		if(arr[i]>j){
			j++;
			i++;
		}
		else{
			j--;
			break;
		}
		
	}
	
	while(i<n){
		if(j<0){
			return "No";
		}
		cout << i << ' ' << j << endl;
		if(arr[i]>=j){
			j--;
			i++;
		}
		
		else{
			return "No";
		}
	}
	return "Yes";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> t;
    while(t--){
    	cout << solve() << endl;;
	}
    
}

