#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	onlinejudge() ;
	int m , n ;
	cin >> m >> n ;
	int val = 1 ;
	int a[m][n] ;
	for ( int i = 0 ; i < m ; i++) {
		for (int j = 0 ; j < n ; j++) {
			a[i][j] = val ;
			val++ ;
		}
	}
	for (int i = 0 ; i < m ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			cout << a[i][j] << " " ;
		}
		cout << endl ;
	}


	return 0 ;
}



