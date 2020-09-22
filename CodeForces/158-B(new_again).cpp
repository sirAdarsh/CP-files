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
    vector<int> vec(n);
    for(int i=0; i<n; i++){
    	cin>>t;
    	vec[i]=t;
	}
	
	vector<bool> done(n,false);
	
	sort(vec.begin(), vec.end());
	
	int tours=0;
	
	for(auto i : vec){
		cout << i << ' ';
	}cout << endl;
	
	for(int i=0; i<n; i++){
		
		if(!done[i]){
			cout << vec[i] << "  ";
			done[i]=true;
			cout << 4-vec[i]<<"    ";
			auto it = lower_bound(vec.begin(), vec.end(), 4-vec[i]);
			if(it==vec.end()){
				cout <<"HOLA"<<endl;
			}
			cout <<" *it = " << *it <<endl;
			if(it!=vec.end()){
				vec.erase(it);
			}
			for(auto it : vec){
				cout << it << ' ';
			}cout << endl;
	
			tours++;
		}
		
	}
    cout << tours << endl;
}

