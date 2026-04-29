#include <stdio.h>
//#include <stdbool.h>

int main(void) {
    int n = 0;
    int a = 900, b = 750, c = 200;

    scanf("%d", &n);
    
    int i, j, k;
    bool is_success = false;
    for (i = 1; i <= n / a; i++) {
        for (j = 1; j <= n / b; j++) {
            for (k = 1; k <= n / c; k++) {
                if (n - a*i - b*j - c*k == 0 && b % 2 == 0 && (k < i || k < j)) {
                    printf("%d %d %d\n", i, j, k);
                    is_success = true;
                }
            }
        }
    }
    if (!is_success) printf("none");
    return 0;
}
