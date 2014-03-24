//alphaparticle
//DIV 2 C : UNUSUAL PRODUCT

#include <bits/stdc++.h>
using namespace std ;


int matC [1005] [1005] ;
int ans [1005][1005] ;

int main(){
  int n , q, i , j , k ;
  scanf("%d",&n);
  for ( i = 0 ; i < n ;i++)
  for ( j = 0 ; j < n ; j++)
  scanf("%d" ,&matC[i][j]) ;

  for ( i = 0 ; i < n ; i++){
  	  for ( j = 0 ; j < n ; j++)
  	  ans[i][j] = matC [i][j] * matC[j][i] ;
  }
int answer , temp ;
  for ( i = 0 ; i < n ; i++ ){
  	  temp = 0 ;
  	  for ( j = 0 ; j < n ; j++)
  	  temp += ans[i][j] ;

  	 answer += temp%2 ;
  }

answer = answer%2 ;
//cout<<"------------------ "<<answer << endl;
scanf("%d",&q) ; 
int a , b ,type;
for ( i = 0 ; i < q ; i++ ){
	 scanf("%d" ,&type) ;
	 if ( type == 3)
	 printf("%d",answer);
	 else {
	 	 scanf("%d",&a);
	 	 if ( answer == 0)
	 	 answer = 1 ;
	 	 else if ( answer == 1)
	 	 answer = 0 ;
	 }
}

return 0 ;
}
