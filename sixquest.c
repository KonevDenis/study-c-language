#include <stdio.h>
void input(int n, int matrix[n][n]);
int podpobdiag(int n, int matrix[n][n]);
int nadglavdiag(int n, int matrix[n][n]);
void output(int n, int matrix[n][n]);
int main(void) {
    int n;  // n строк по m чисел
    scanf("%d", &n);
    int a[n][n];
    input(n, a);
    output(n, a);
}
void input(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
int podpobdiag(int n, int matrix[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                sum = sum + matrix[i][j];
            }
        }
    }
    return sum;
}
int nadglavdiag(int n, int matrix[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                sum = sum + matrix[i][j];
            }
        }
    }
    return sum;
}
void output(int n, int matrix[n][n]) {
    if (podpobdiag(n, matrix) > nadglavdiag(n, matrix)) {
        printf("%d %d", nadglavdiag(n, matrix), podpobdiag(n, matrix));
    } else {
        printf("%d %d", podpobdiag(n, matrix), nadglavdiag(n, matrix));
    }
}