#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
}
bool ispalindrome(char a[100]) {
	int i = 0 ;
	int j = strlen(a) - 1 ;
	while (i < j) {
		if (a[i] == a[j]) {
			i++ ;
			j-- ;
		}
		else {
			return false ;
		}

	}
	return true ;
}


int main() {
	onlinejudge() ;

	char str[100]  ;
	cin >> str ;
	if (ispalindrome(str)) {
		cout << "It is a Palindrome" ;
	}
	else {
		cout << "It is not a palindromwew " ;
	}


	return 0 ;
}



