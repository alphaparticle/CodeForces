#include <bits/stdc++.h>
using namespace std;

typedef vector <char> vc ;
vector <vc> vvc ;

int arr[1010] ;

int main(){
int n , i ,j, k  , low ,high , x ,y , cols = 0;
cin >> n ;
for( i = 0 ; i < n ; i++)
    cin >> arr[i]  ,cols += arr[i] ;

low = high = y = 0 ;
//cout << cols << endl;

for ( i = 0 ; i < n ; i++){
     if ( i % 2 == 0){
         y += arr[i] - 1 ;
     }
     else {
         y -= arr[i] - 1 ;
     }
    low = min( low , y );
    high = max ( high , y) ;
  //cout << low <<" " << high << endl;
}

int rows = abs(low)+high + 1 ;
//cout << rows << endl ;
vc temp ;

for ( i = 0 ; i < cols ; i++)
temp.push_back( ' ' );

for ( i = 0  ; i < rows ; i++ )
{
    vvc.push_back( vc (temp) ) ;
}

//cout << vvc.size() <<" "<<vvc[0].size() << endl;
x = 0 ; y = abs(low);

for ( i = 0 ; i < n ; i++){

 //  cout << x <<" " << y << endl;
      if ( i%2 == 0){
         for ( j = y ; j < y+arr[i] ; j++)
         vvc[j][x++] = '/' ;
         y = j-1 ;
      }
      else {
        for ( j = y ; j > y-arr[i] ; j--)
         vvc[j][x++] = '\\' ;
         y = j+1 ;
      }

}

for ( i = rows-1 ; i >= 0 ; i--){
     for ( j = 0 ; j < cols ; j++)
     printf("%c",vvc[i][j]) ;
     printf("\n") ;
}

return 0 ;
}
