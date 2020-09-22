/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define pb push_back
#define pf push_front
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
    int sum=0;
    for(int i=0; i<n; i++){
    	cin >> arr[i];
    	sum += arr[i];
	}
	if(sum%n){
		cout <<"Unrecoverable configuration.";
		return 0;
	}
	int eq = sum/n;
	
	int idx1,idx2;
	idx1=idx2=-1;
	int diff;
	
	for(int i=0; i<n; i++){
		
		if(arr[i]>eq){
			diff = arr[i]-eq;
			if(idx1!=-1){
				cout <<"Unrecoverable configuration.";
				return 0;
			}
			else{
				idx1=i;
			}
		}
		elif(arr[i]<eq){
			if(idx2!=-1){
				cout <<"Unrecoverable configuration.";
				return 0;
			}
			else{
				idx2=i;
			}
		}
		
	}
	
	if(idx1!=-1 && idx2!=-1){
		cout << diff << " ml. from cup #"<<idx2+1<<" to cup #"<<idx1+1<<".";
		return 0;
	}
	cout <<"Exemplary pages.";
    
}

