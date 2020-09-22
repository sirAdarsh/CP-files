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
    
    int t;
    cin >> t;
    while(t--){
    	int n,k;
    	cin >> n >> k;
    	int arr[n];
    	int tmp;
    	
    	
    	for(int i=0; i<n; i++){
    		cin >> tmp;
    		arr[i] = tmp%k;
		}
		
		vector<int> vec;
		
		for(int i=0; i<n; i++){
			vec.push_back(arr[i]);
		}
		
		int steps=0;
		
		int x=0;
		
		sort(vec.begin(),vec.end());
		
		for(auto i : vec) {
			cout << i << ' ';
		}
		cout <<endl;
		
		int inc=0;
		
		int tmpvec;
		
		for(int i=0; i<vec.size(); i++){
			
			tmpvec=vec[i]+inc;
			
			cout << "tmpvec=  "<<tmpvec<<" x= "<<x<<endl;
			
			
			if( x==tmpvec ){
				
			}
			
			else if(x<tmpvec){
				x++;
				steps++;
				int diff = tmpvec-x;
				steps += diff+1;
				if(diff==0){
					x = tmpvec;
				}
				else{
					x = tmpvec;
				}
				
			}
			else{
				inc += k;
				i--;
			}
			
		}		
		
		cout << steps << endl;
		
	}
    
}

