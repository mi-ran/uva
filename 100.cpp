#include <iostream>
#include <cstdio>

using namespace std;

uint64_t process(uint64_t n) {
	uint64_t res = 1;
	while(n != 1) {
		++res;
		if((n%2) != 0) {
			n = 3*n + 1;
		} else {
			n = n/2;
		}
	}
	return res;
}

uint64_t process(uint64_t i, uint64_t j) {
	uint64_t res = 0;
	uint64_t t;
	for (uint64_t k = i; k <= j; ++k) { 
		uint64_t tmp = process(k);
		if(tmp > res) {
			res = tmp;
			t = k;
		}
	}
	return res;
}

int main() {
	uint64_t i, j = 0;
	while(scanf("%lld %lld", &i, &j) != EOF) {
		uint64_t maxVal;
		if (j < i) {
			maxVal = process(j, i);
		} else {
			maxVal = process(i, j);
		}
		cout << i << " " << j << " " << maxVal << endl;
	}
	return 0;
}
