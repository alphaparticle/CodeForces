#include <bits/stdc++.h>
using namespace std ;

//ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }


int main(){

   int  n , s ;
   cin >> n >> s ;

    bool f = false ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++)
    cin >> arr[i] ;

    int  i , j ,sum ;
    for ( i = 0 ; i < n ; i++){
    sum = 0 ;
    for ( j = 0 ; j < n ; j++)
    if( j != i)
    sum += arr[j] ;
   
    if ( sum <= s){
    	 f = true ; break ;
    }
 }

  if(f)
  	cout <<"YES\n";
  else
  	cout <<"NO\n" ;




	return 0 ; 
}
