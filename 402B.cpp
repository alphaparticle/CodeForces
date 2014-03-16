#include <iostream>
#include <cstdio>
using namespace std ;


int main(){

 int N, K , i , j , k ;

 scanf("%d %d",&N ,&K) ;
 int arr[N+1] ;
 for ( i = 1 ; i <= N ; i++)
 scanf("%d" ,&arr[i]) ;


  int best = 100010 , index;
  for( i = 1 ; i <= N ; i++){
  	  int c = 0 ;
  	  for ( j = 1  ; j <= N ; j++ )
  	     if ( i != j){
  	     int temp = arr[i] - (i-j)*K ;
  	     if ( temp <= 0)
  	     { c = 1000010 ; break ;}

  	     if ( arr[j] != temp)
  	     c++ ;
  	  }
  	  if ( c < best){

  	  	 best = c ; index = i ; 
  	  }

  }
  printf("%d\n",best);
    for ( i = 1 ; i <= N; i ++){
  	  int temp = arr[index] - (index-i)*K ;
  	  if ( arr[i] != temp ){
  	  	  if ( arr[i] < temp )
  	  	  printf("+ %d %d\n", i , temp -arr[i]);
  	  	  else
  	  	  printf("- %d %d\n" , i, arr[i] - temp );
  	  }
  }

	return 0 ;
}
