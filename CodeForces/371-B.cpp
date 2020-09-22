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
int a,b;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    
    cin >> a >> b;
    int A=a,B=b;
    
    int two1=0,three1=0,five1=0,two2=0,three2=0,five2=0,x=1,y=1;
    
    for(int i=2; i*i<=a; i++){
    	if(i==2){
    		int cnt=0;
    		while(a%i==0){
    			a/=i;
    			cnt++;
			}
			two1=cnt;
		}
		else if(i==3){
			int cnt=0;
			while(a%i==0){
				a/=i;
				cnt++;
			}
			three1=cnt;
		}
		else if(i==5){
			int cnt=0;
			while(a%i==0){
				a/=i;
				cnt++;
			}
			five1=cnt;
		}
	}
	if(a==2){
		two1++;
	}
	elif(a==3){
		three1++;
	}
	elif(a==5){
		five1++;
	}
	
	int form = pow(2,two1)*pow(3,three1)*pow(5,five1);
	x = A/form;
//	cout << form << endl;
	for(int i=2; i*i<=b; i++){
    	if(i==2){
    		int cnt=0;
    		while(b%i==0){
    			b/=i;
    			cnt++;
			}
			two2=cnt;
		}
		else if(i==3){
			int cnt=0;
			while(b%i==0){
				b/=i;
				cnt++;
			}
			three2=cnt;
		}
		else if(i==5){
			int cnt=0;
			while(b%i==0){
				b/=i;
				cnt++;
			}
			five2=cnt;
		}
	}
	if(b==2){
		two2++;
	}
	elif(b==3){
		three2++;
	}
	elif(b==5){
		five2++;
	}
	
//	cout << two2 << ' ' << three2 << ' ' << five2 << endl;
	
	form = pow(2,two2)*pow(3,three2)*pow(5,five2);
	y = B/form;
//	cout << b << ' ' << form << endl;
//	
//	cout << x << ' ' << y << endl;
	
	if(x!=y){
		cout << -1 << endl;
	}
	else{
		
		int ans=0;
		ans = abs(two1-two2)+abs(three1-three2)+abs(five1-five2);
		cout << ans << endl;
		
	}
        
}

