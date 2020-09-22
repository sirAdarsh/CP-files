/*----- || Hare Krishna || -----*/

// IT TAKES TIME, DON'T FORGET WHO YOU ARE!

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define elif else if
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

string s;
int t;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    int nums[] = {21,4,7};
    int sz = sizeof(nums)/sizeof(nums[0]);
    
    int sum = 0;
    
    for(int i=0; i<sz; i++){
    	
    	int divs = 0;
    	int sumCur=0;
    	
    	for(int j=1; j*j<nums[i]; j++){
    		if(nums[i]%j==0){
    			divs+=2;
    			sumCur += (j);
    			sumCur += (nums[i]/j);
			}
		}
    	if(divs==4){
    		sum += sumCur;
		}
	}
    cout << sum << endl;
}

