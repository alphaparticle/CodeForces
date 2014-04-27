#include <bits/stdc++.h>
using namespace std ;

//ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }

int arr[110][110] ;
int n , m ;
int sol ( int top  , int bottom ){
    if ( top == bottom)
    return 1 ;
    bool f = true ;
    int t , b , c ;
    for ( t = top , b= bottom ;  t <= b ; t++ ,b-- )
    for ( c = 1 ; c <= m ; c++)
    if( arr[t][c] != arr[b][c] )
    {
    	 f = false ; break ;
    }

    if ( f  && bottom%2 == 0)
    	return sol ( top , bottom/2 ) ;
    else
    	return (bottom-top+1) ;
    
}

int main(){
   int  i, j , ans ;
   cin >> n >> m ;


   for ( i = 1 ; i <= n ; i++)
   for ( j = 1 ; j <= m ; j++)
   	cin >> arr[i][j] ;


   ans = sol(1 , n ) ;
  cout << ans << endl;




	return 0 ; 
}
