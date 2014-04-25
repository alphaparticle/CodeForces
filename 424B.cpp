#include <bits/stdc++.h>
using namespace std; 

typedef pair < double , long > di ;
vector < di > v ;

int main(){
    long n , pop , goal = 1000000;
    cin >> n >> pop ;
    int x , y , k,i ;
    double w ;
    for (  i = 0 ;  i < n ; i++){
    	 cin >> x >> y >> k ;
    	 w = sqrt ( x*x + y*y ) ;
    	 v.push_back ( di ( w ,k));
    }
    sort ( v.begin() , v.end() );
    double ans = 0 ; 
    for ( i = 0 ; i < n ; i++){
    	if ( pop  >= goal)
    	break ;
    	pop += v[i].second ;
    	ans = max ( ans , v[i].first) ;

    }
    if ( pop >= goal ){
    	printf("%0.6lf\n",ans);
    }
    else
    	cout<<"-1\n";


	return 0 ;
}
