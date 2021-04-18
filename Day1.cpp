#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	onlinejudge() ;
	string s1 ;
	getline(cin, s1) ;
	for (auto it = s1.begin()  ; it != s1.end() ; it++) {
		cout << (*it) << endl ;
	}
}



