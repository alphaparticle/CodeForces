#include <bits/stdc++.h>
using namespace std ;


int main(){
 int n , k ,ans;
 cin >> n >> k ;
 int i , j, arr[n];	
for ( i = 0 ; i < n ; i++)
cin >> arr[i] ; 
sort ( arr , arr+n) ;
ans = arr[n-k];
cout << ans << endl;

	return 0 ;
}
