#pragma GCC optimize("Ofast") 
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma") 
#pragma GCC optimize("unroll-loops") 
#include <complex> 
#include <queue> 
#include <set> 
#include <unordered_set> 
#include <list> 
#include <chrono> 
#include <random> 
#include <iostream>
#include <algorithm> 
#include <cmath> 
#include <string> 
#include <vector> 
#include <map> 
#include <unordered_map> 
#include <stack> 
#include <iomanip> 
#include <fstream> 

using namespace std; 

typedef long long ll; 
typedef long double ld; 
typedef pair<int,int> p32; 
typedef pair<ll,ll> p64; 
typedef pair<double,double> pdd; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
typedef vector<ld> vld32; 
typedef vector<vector<int> > vv32; 
typedef vector<vector<ll> > vv64; 
typedef vector<vector<p64> > vvp64; 
typedef vector<p64> vp64; 
typedef vector<p32> vp32; 
int MOD = 1e9+7; 
double eps = 1e-12; 
#define forn(i,e) for(ll i = 0; i < e; i++) 
#define forsn(i,s,e) for(ll i = s; i < e; i++) 
#define rforn(i,s) for(ll i = s; i >= 0; i--) 
#define rforsn(i,s,e) for(ll i = s; i >= e; i--) 
#define wfort(t) while(t--)
#define wlh(l,h) while(l<=h)
#define ln "\n" 
#define dbg(x) cout<<#x<<" = "<<x<<ln 
#define mp make_pair 
#define pb push_back 
#define fi first 
#define se second
#define INF 2e18 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#define all(x) (x).begin(), (x).end() 
#define sz(x) ((ll)(x).size()) 


ll calcPow(int a, int b){
	ll ans = 1;
	while(b){
		if(b&1){
			ans = (ans*a)%MOD;
		}
		a = (a*a)%MOD;
		b = b>>1;
	}
	return ans;

}

void solve() {
    int n; cin >> n;
	vector<int>blackBox(n+1,1);
	blackBox[0] = 0;
	blackBox [1] = 0;
	for(int i=2;i*i<=n;i++){
		if(blackBox[i] == 1){
			for(int j= i * i ; j<= n;j += i){
				blackBox[j] = 0;
			}
		}
	}
	for(int i=2;i<n;i++){
		if(blackBox[i] == 1){
			cout << i << " ";
		}	
	}
}

int main() 
{ 
	fast_cin();
	solve();
	return 0; 
}
