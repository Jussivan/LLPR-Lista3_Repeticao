#include <stdio.h>
 
 int main() {
 	int N;
 	scanf("%d", &N);
	for (int I = 1; I <= 10; I++){
		printf("%d x %d = %d\n", I, N, N*I);
	}
 	return 0;
 }