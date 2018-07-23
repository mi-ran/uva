#include <iostream>
#include <cstdio>

using namespace std;

int getMaxIndex(int[] list) {
	int max_idx = 0;
	if(list[0] < list[1]) {
		max_idx = 1;
	}

	if(list[max_idx] < list[2]) {
		max_idx = 2;
	}

	return max_idx;
}

int main() {
	int brown[3];
	int green[3];
	int clear[3];

	while(scanf("%d %d %d %d %d %d %d %d %d", &brown[0], &green[1], &clear[2], &brown[0], &green[1], &clear[2], &brown[0], &green[1], &clear[2]) != EOF) {
		int brownmax_idx = getMaxIndex(brown);
		int greenmax_idx = getMaxIndex(green);
		int clearmax_idx = getMaxIndex(clear);

		
	}
}
