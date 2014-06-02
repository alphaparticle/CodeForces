#include <iostream>
using namespace std ;

int  arr[110] ;
int main(){

int ans , n , m , i , j , k ;
cin >> n  >> m ;
for( i = 0 ; i < n ; i++)
    cin >> arr[i] ;


ans =  0 ;
for ( i = 0 ; i < n ; )
{
    int temp = m ;
    j = i ;
    if ( arr[j] > 0 ){
    while ( temp > 0 && j < n ){
        if( arr[j] <= temp)
        {

            temp -= arr[j] ;
            arr[j] = 0 ;
        }
        else
        break ;
       j++ ;
    }
    ans++ ;
}
i = j ;

}

cout << ans << endl;


return 0 ; }
