#include <bits/stdc++.h>
using namespace std ;

//char arr [100005] ;
int main(){
  int n,i ; 	
  string ans ,arr;
  cin >> n ;
  cin >> arr ;
  for ( i = 0 ; i < arr.length() ; i++)
  ans += '!' ;
  n-- ;
  for ( i = 0 ; i < arr.length() ; i++){
  	 if(arr[i] != '?')
  	 ans[i] = arr[i] ;
  }
 // cout <<endl<<ans << endl ;
 while (n--){
     cin >> arr ;
     for ( i = 0;  i < arr.length() ; i++ ){
     	if (arr[i] == ans[i] )
     	continue ;
        else if ( ans[i] == '?')
        continue ;
        else if ( ans[i] == '!' && arr[i] != '?' )
        ans[i] = arr[i] ;
        else if (ans[i] != '?' && arr[i] == '?' )
        ans[i] = ans[i] ;
        else if ( ans[i] != '?' && arr[i] != '?' && arr[i] != ans[i] )
        ans[i] = '?' ;
     }
    // cout << ans << endl;
 }
for ( i = 0 ; i < ans.length() ; i++){
	if(ans[i] == '!')
	ans[i] = 'x' ;
}
cout << ans << endl; 
	return 0 ;
}
