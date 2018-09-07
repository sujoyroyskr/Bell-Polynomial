#include <stdio.h>

void partitions(int *a, int b) {
	int part_num = 1;
	int c;
	for (c = 0; c < b; ++c)
		if (a[c] > part_num)
			part_num = a[c];

	int d;
	for (d = part_num; d >= 1; --d) {
		printf("{");
		for (c = 0; c < b; ++c)
			if (a[c] == d)
				printf("%d, ", c + 1);
		printf("\b\b} ");
	}
	printf("\n");
}

int next(int *a, int *e, int b) {

	int c = 0;
	++a[c];
	while ((c < b - 1) && (a[c] > e[c] + 1)) {
		a[c] = 1;
		++c;
		++a[c];
	}

	if (c == b - 1)
		return 0;

	int max = a[c];
	for (c = c - 1; c >= 0; --c)
		e[c] = max;

	return 1;
}

int main(int argc, char *argv[]) {
	int b = 4; // b is number of inputs
	int i;
	int a[16];
	int e[16];
	
	for (i = 0; i < b; ++i) {
		a[i] = 1;
		e[i] = 1;
	}

	partitions(a, b); //Initial Partitions

	while (next(a, e, b))
		partitions(a, b); //Remaining Partitions

	return 0;
}
