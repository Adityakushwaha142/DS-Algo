#include<iostream>
#include<bits/stdc++.h>

using namespace std  ;
void onlinejudge() {
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output1.txt", "w", stdout);
#endif
}
bool compare (int a , int b ) {
	return a <= b ;
}

int main() {
	onlinejudge() ;
	int coins [] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000} ;
	int n = sizeof(coins) / sizeof(int) ;
	cout << "APPLE" ;
	int money ;
	cin >> money  ;

	int total = 0 ;




	while (money > 0) {
		auto amount = lower_bound(coins , coins + n , money ,  compare) - coins - 1 ;
		int m = coins[amount] ;
		money = money - m  ;
		total++ ;

	}
	cout << endl << total ;






	return 0 ;
}




