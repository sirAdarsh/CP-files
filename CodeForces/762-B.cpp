/*----- || Hare Krishna || -----*/

/*  "WHY DO WE FALL, BRUCE?"  */

//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define int long long
#define elif else if
#define pb push_back
#define pf push_front
#define PI 3.1415926535897932384
#define MOD 1000000007
using namespace std;

char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

string s;
int t;

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int a,b,c;
    cin >> a >> b >> c;
    int m;
    cin >> m;
    vector<int> usb,ps2;
    while(m--){
    	cin >> t;
    	cin >> s;
    	if(s=="USB"){
    		usb.pb(t);
		}
		else{
			ps2.pb(t);
		}
	}
	
	sort(usb.begin(),usb.end());
	sort(ps2.begin(),ps2.end());
	
	vector<int> fnl;
	
	// usb
	int mouses=0;
	int cost=0;
	
	int usbidx=-1;
	
	int tmpA=a;
	
	for(int i=0; i<usb.size(); i++){
		
		if(tmpA==0){
			break;
		}
		cost+=usb[i];
		tmpA--;
		usbidx=i;
	}
	int usbBought=a-tmpA;
	// ps2
	
	int ps2idx=-1;
	int tmpB=b;
	
	for(int i=0; i<ps2.size(); i++){
		
		if(tmpB==0){
			break;
		}
		cost+=ps2[i];
		tmpB--;
		ps2idx=i;
	}
	
	int ps2bought = b-tmpB;
	
	for(int i=usbidx+1; i<usb.size(); i++){
		fnl.pb(usb[i]);
	}
	for(int i=ps2idx+1; i<ps2.size(); i++){
		fnl.pb(ps2[i]);
	}
	sort(fnl.begin(),fnl.end());
	
	int items=usbBought+ps2bought;
	
	for(int i=0; i<fnl.size(); i++){
		if(c==0){
			break;
		}
		cost += fnl[i];
		c--;
		items++;
	}
		
	
	cout << items << ' ' << cost << endl;
}

