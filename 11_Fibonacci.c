//Fibonacci sequence using for loop
//preprocessor directive
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    //Print function 
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    //Output 
    printf("Fibonacci Series: ");
//Loop for Series
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}