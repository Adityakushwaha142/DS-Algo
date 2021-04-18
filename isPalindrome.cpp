#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
}
bool ispalindrome(char *a ) {
	int s = 0 ;
	int  e = strlen(a) - 1 ;
	while (s < e) {
		if (a[s] == a[e]) {
			s++ ;
			e-- ;
		}
		else {
			return false ;
		}
	}
	return true  ;

}


int main() {
	onlinejudge() ;
	char a[100] ;
	cin.getline(a, 100) ;

	if (ispalindrome(a)) {
		cout << "True" ;
	}
	else {
		cout << "False" ;
	}


	return 0 ;
}



