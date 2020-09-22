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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
    	cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	vector<int> vec(n);
	for(int i=0; i<n; i++){
		vec[i]=arr[i];
	}
	
	int pts=0;
	
	for(int i=0; i<n; i++){
		auto it = upper_bound(vec.begin(),vec.end(),arr[i]);
		if(it!=vec.end()){
			pts++;
			vec.erase(it);
		}
		
	}
    cout << pts << endl;
}

