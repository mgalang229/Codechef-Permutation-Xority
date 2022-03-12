#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	
	// if N is equal to 2, then the answer does not exist
	// because is only one absolute difference term
	
	// there will be two cases if N > 2:
	
	// 1st case: N is odd
	// simply print the sequence from 1 to N (inclusive)
	// the total absolute difference terms in this sequence
	// is odd, thus, it would produce an XOR value of 0
	
	// 2nd case: N is even
	// skip the first 4 values of the sequence because based on the 1st case,
	// a sequence with an even length will automatically produce an XOR value of 0, 
	// so we only need to worry about cancelling the 1's in the first 4 values
	
	if(n == 2) {
		cout << "-1\n";
		return;
	}
	if(n % 2 == 1) {
		for(int i = 1; i <= n; i++) {
			cout << i << " ";
		}
	} else {
		cout << "2 3 1 ";
		for(int i = 4; i <= n; i++) {
			cout << i << " ";
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

