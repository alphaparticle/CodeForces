/*
Date : 12-May-14
Time : 9:22 am IST
author - @alphaprticle
Problem id : 430A
Problem name : Points and Segments
Problem Link : http://codeforces.com/problemset/problem/430/A
*/

#include <bits/stdc++.h>
using namespace std ;

#define INF 18446744073709551610 
#define LIM 1000000
#define readi(n) scanf("%d", &n) ;
#define readc(c) scanf("%c", &c) ;
#define read2i(n,m) scanf("%d %d", &n , &m) ;
#define read3i(a,b,c) scanf("%d %d %d",&a ,&b ,&c);
#define pb push_back
#define rep(i,n) for( int i = 0 ; i < n ; i++)
#define reps(i,a,b) for(int i = a ; i <= b ; i++) 
#define rev(i,b,a) for(int i = b ; i >= a ; i--)
#define P first
#define Q second

typedef long long ll ;
typedef pair <int,int> ii ;
typedef vector < ii > vii ;
typedef vector < vii> viii ;

/*
GCD
ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
*/

/*
  //Seive
  bool p[LIM] ;
  vector <ll> prime ;
  void seive(){
	 memset (p , true ,sizeof p);
	 p[0] = p[1] = false ;
	 for ( ll i = 2 ; i <= LIM ; i++){
	   if(p[i])
	   {
	     prime.pb(i);
	     for ( ll j = i*i ; j <= LIM ; j += i)
	     p[j] = false ;
	   }
	 }
  }

*/

//int points [110] ;
viii segs ;
int main(){
  int n , m ;
  int i , j, k;
  cin >> n >> m ;
  viii points ;
  
 rep ( i , n){
 readi(j) ;
 points.pb(ii(j,i));
}

sort( points.begin() , points.end());

vector <int> :: iterator it ;
  rep ( i , m){
  	 read2i( j,k);
  	 segs.pb( ii (j,k) );
  }
int ans[n] ;

rep ( i , n){
	 if ( i%2 == 0)
	 	ans[ points[i].Q ] = 0;
	 else
	 	ans[points[i].Q] = 1 ;
}


rep ( i , n)
cout << ans[i] <<" ";
return 0;
}
