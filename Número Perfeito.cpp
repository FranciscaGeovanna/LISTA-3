#include <stdio.h>

int main(){
    int N, X, s = 0;
    
    scanf ("%d", &N);
    
    for (int n = 1; n <= N; n++){
        scanf ("%d", &X);
        
        for (int x = 1; x <= X; x++){
            if (X% x == 0){
                s += x;
            }
        }
        
        if (s == X){
            printf ("%d eh perfeito\n", X);
        } else {
            printf ("%d nao eh perfeito\n", X);
        }
    }

    return 0;
}

