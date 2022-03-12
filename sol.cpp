#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	
	// view the image in this repository for better understanding
	
	// if we perform the needed operations manually and observe the
	// behavior of the sequence, it can be inferred that a sequence of
	// length N, where N <= 2, does not have a valid answer
	
	// meanwhile, a sequence of length N, where N > 2 involves two types of answers
	// in both of the cases, assume that the sequence is sorted in non-decreasing order
	
	// if N is odd:
	// simply print the sequence from 1 to N (inclusive)
	
	// if N is even:
	// place the N-th value in the (N - 2)-th position
	// place the (N - 2)-th value in the (N - 1)-th position
	// place the (N - 1)-th value in the N-th position
	
	if(n == 2) {
		cout << "-1\n";
		return;
	}
	vector<int> seq(n);
	for(int i = 0; i < n; i++) {
		seq[i] = i + 1;
	}
	if(n % 2 == 0) {
		int first = seq[n-1];
		int second = seq[n-3];
		int third = seq[n-2];
		seq[n-3] = first;
		seq[n-2] = second;
		seq[n-1] = third;
	}
	for(auto& e : seq) {
		cout << e << " ";
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

