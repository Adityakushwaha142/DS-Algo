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
	int a[n] ;
	for ( int i = 0 ; i < n ; i++) {
		cin >> a[i]  ;
	}
	for ( int i = 0 ; i < n ; i++) {
		int min = i ;
		for ( int j = i ; j < n ; j++) {
			if (a[j] < a[i]) {
				min = j ;
			}

		}
		swap(a[i] , a[min]) ;
	}
	for ( int i = 0 ; i < n  ; i++) {
		cout << a[i] << ' '  ;
	}

	return 0 ;
}



