#include <bits//stdc++.h>
using namespace std ;


int arr[210] ;
int a[210] , b[210] ;
int main(){
 int n , swaps ,i, j , k , x ,y , S  ;
 cin >> n >>swaps;
 for ( i = 0 ; i < n ; i++)
 cin >> arr[i] ;

 int ans = arr[0] ;

  for ( i = 0 ; i < n ; i++)
  for ( j = i+1 ; j < n ; j++){
  	       x = y = S = 0 ;
  	       for ( k = 0 ; k < n ; k++){
  	       	   if ( k >= i && k <= j) {
  	       	   	   a[x++] = arr[k] ;
  	       	   	   S += arr[k] ;
  	       	   }
  	       	   else 
  	       	   	b[y++] = arr[k] ;

  	       }
  	      sort ( a, a+x);
  	      sort ( b , b+y) ;
  	      reverse ( b , b+y) ;

  	     for ( k = 0 ; k < swaps ; k++ ){
  	     	 if ( k >= x || k >= y) break ;
  	     	 if ( b[k] < a[k] ) break;
  	     	 S += b[k] - a[k] ;
  	     }
  	    ans = max ( ans , S) ;
  }

 cout << ans << endl;
	return 0 ;
}
