#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
}

void rotate( int a[][100] , int n ) {
	for ( int i = 0 ; i < n  ; i++) {
		int startCol = 0 ;
		int endCol = n - 1 ;
		while (startCol < endCol) {
			swap(a[i][startCol] , a[i][endCol]) ;
			startCol++ ;
			endCol-- ;
		}

	}

}
void transpose ( int a[][100] , int m , int n ) {
	for ( int i = 0 ; i < n ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			if (i < j) {
				swap(a[i][j] , a[j][i])  ;
			}
		}
	}
}


int main() {
	onlinejudge() ;
	int m, n ;
	cin >> m >> n ;
	int a[100][100] ;
	for (int i = 0 ; i < m ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			cin >> a[i][j] ;
		}
	}
	rotate(a,  n) ;
	transpose(a, m , n ) ;
	for ( int i = 0 ; i < m  ; i++) {
		for ( int j = 0 ; j < n ; j++) {
			cout << a[i][j] << " "  ;
		}
		cout << endl ;
	}



	return 0 ;
}



