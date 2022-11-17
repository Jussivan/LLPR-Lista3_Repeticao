#include <stdio.h>
 
int main() {
    int N, X, Y, Z, S;
    scanf("%d", &N);
    S = 0;
    for (int Y=0; Y!=N; Y++) {
        scanf("%d", &X);
        S = 0;
    for (int Z=1; Z!=X; Z++) {
        if (X%Z==0) {
            S = S + Z;
        }
    }
        if (S!=X) {
            printf("%d nao eh perfeito\n", X);
        } else {
            printf("%d eh perfeito", X);
        }   
    }
    return 0;
}
