#include <bits/stdc++.h>
using namespace std ;


#define P first
#define Q second
#define pb push_back
typedef pair < int , char > ic  ;
typedef pair  < ic , int > ici ;


int main(){

string a , ulta  ; int  swaps ;
int i , j ,k , index ,l ;
cin >> a >> swaps ;
ulta = a ;

sort ( ulta.begin() , ulta.end() );
reverse ( ulta.begin() , ulta.end() );

vector  < ici > choices ;
int len = a.length() ;
//cout <<" " << ulta << endl;

for ( i =  0 ;  i < len   &&  a != ulta  && swaps > 0  ; i++){

     j = i+1 ;
     choices.clear() ;
     for (  ; j < len  && j-i <= swaps ; j++)
     if ( a[j] > a[i]  )
     {

          choices.pb( ici ( ic(  max( j - swaps ,i ) , a[j]) , j ) ) ;
     }

    sort ( choices.begin() , choices.end() ) ;
   // cout << choices.size() << endl;
   char  m = 0  ;
     // cout <<"---------------------\n";
     // for ( j = 0 ;  j < choices.size() ; j++)
     // cout << choices[j].P.P <<" "<<choices[j].P.Q <<" "<<choices[j].Q << endl;
      if ( choices.size() > 0 ){
                    index = choices[0].Q  ;
                    m = choices[0].P.Q ;
                    for ( j = 1 ; j < choices.size() ; j++)
                    if ( choices[j].P.P != choices[0].P.P )
                     break ;
                    else {
                         if ( choices[j].P.Q > m ){
                             m  = choices[j].P.Q ;
                             index = choices[j].Q  ;
                         }
                    }


                    //index = choices[j-1].Q ;
       //             cout << i <<" " << index <<" - > " ;
                    if( index != -1 )
                    for ( j = index ;    j > i   && swaps ; j-- , swaps--  )
                    swap ( a[j] , a[j-1] ) ;

         //          cout << a << " "<<swaps << endl ;
       }
}

cout << a ;//<<" "<<swaps<< endl;

return 0 ;
}
