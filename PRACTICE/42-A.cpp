/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int n,v;
    cin >> n >> v;
    float a[n],b[n];
    int sum=0;
    for(int i=0; i<n; i++){
    	cin >> a[i];
    	sum += a[i];
	}
	for(int i=0; i<n; i++){
		cin >> b[i];
		b[i] /= a[i];
	}
    
    float minn = *min_element(b,b+n);
    
    float ans;
    
    ans = minn*sum;
    
//    cout << minn << ' '<< sum << endl;
    
    if(ans > v){
    	ans = v;
	}
	
	printf("%.4f",ans);
    
}

