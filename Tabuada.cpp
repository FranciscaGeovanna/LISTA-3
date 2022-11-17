#include <stdio.h>

int main(){
    int N, m;
    
    scanf ("%d", &N);
    
    for (int x = 1; x <= 10; x++){
        m = x * N;
        printf ("%d x %d = %d\n", x, N, m);
    }
    
    return 0;
}