/*----- || Hare Krishna || -----*/

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

int mp[60];

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout); 418,204,77,278,239,457,284,263,372,279,476,416,360,18
    
    vector<int> time={418,204,77,278,239,457,284,263,372,279,476,416,360,18};
    
        for(int i=0; i<time.size(); i++){
            time[i]=time[i]%60;
            mp[time[i]]++;
        }
        
        int ans=0;
        
        int n;
        
        for(int i=0; i<time.size(); i++){
        	cout << time[i] <<" ";
		}cout << endl;
        
        for(int i=0; i<60; i++){
        	
        	if(i==0){
                n = mp[i];
        		ans += n*(n-1)/2;
        		mp[i]=0;
			}
			else{
                n = mp[60-i];
//                cout <<mp[60-i]<<" "<<n<<endl;
                if(n>1){
                	if(i==30){
                		ans += (n-1);
					}
					else
                	ans += n;
                	mp[60-i]=0;
                	cout << ans << endl;
				}
				
			}
		}
        
        cout << ans;
    
}

