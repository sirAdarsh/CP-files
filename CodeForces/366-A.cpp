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

struct post{
    int c1,i1,c2,i2;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    
    int n;
    cin >> n;

    vector<post> vec(4);
    for(int i=0; i<4; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        vec[i].c1=a;
        vec[i].i1=b;
        vec[i].c2=c;
        vec[i].i2=d;
    }

    int ans1,ans2,ans3;

    bool ok=false;

    for(int i=0; i<n; i++){

        if(vec[i].c1<vec[i].c2 && vec[i].i1<vec[i].i2){
            continue;
        }
        if(vec[i].c2<vec[i].c1 && vec[i].i2<vec[i].i1){
            continue;
        }

        
        int a,b,c,d;
        a = vec[i].c1;
        b = vec[i].i1;
        c = vec[i].c2;
        d = vec[i].i2;
        ans1 = i+1;

        if(a+c == n){
            ans2 =a; ans3=c;
            ok=true;
            break;
        }
        if(a+d == n){
            ans2=a; ans3=d;
            ok=true;
            break;
        }
        if(b+c == n){
            ans2=b; ans3=c;
            ok=true;
            break;
        }
        if(b+d == n){
            ans2=b; ans3=d;
            ok=true;
            break;
        }

    }
    if(ok)
    cout << ans1 << ' ' << ans2 << ' ' << ans3;
    else
    {
        cout << -1 << endl;
    }
    

}
