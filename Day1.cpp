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
	int n  ;
	cin >> n ;
	int a [n] ;
	for ( int i = 0; i < n  ; i++) {
		cin >> a[i] ;
	}
	for ( int i = 1 ; i < n ; i++) {
		for ( int j = 0 ; j < n - i ; j++) {
			if (a[j ] > a[j + 1]) {
				swap(a[j] , a[j + 1]) ;
			}
		}
	}
	for ( int i = 0 ; i < n ; i++) {
		cout << a[i] << " " ;
	}

	return 0 ;
}



