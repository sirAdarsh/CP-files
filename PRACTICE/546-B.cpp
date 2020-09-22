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
int n;
int a[5000];
 
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> a[i];
 
	sort(a, a + n);
 
	int next = 0;
	int res = 0;
	for(int i = 0; i < n; ++i)
	{
		res += max(0, next - a[i]);
		next = max(a[i], next) + 1;
	}
	cout << res << endl;
	return 0;
}
