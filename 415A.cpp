#include <bits/stdc++.h>
using namespace std ;




int main(){

  int  n , m ;
  int arr[101] ;
  memset ( arr , 0 ,sizeof arr);
  int x ,i , j ;
  cin >> n >> m ;
  for ( i = 0 ; i < m ; i++){
  	 cin >> x ;
  	 for ( j = x ; j <= n ; j++)
  	 if ( arr[j] == 0)
  	 arr[j] = x ;
  }
  
  for ( i = 1 ; i <= n ; i++)
  cout << arr[i] <<" ";


	return 0 ;
}
