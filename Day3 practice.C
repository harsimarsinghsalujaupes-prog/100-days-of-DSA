#include <stdio.h>

int main() {
    int n, k, i;
    int comparisons = 0;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    for (i = 0; i < n; i++) {
        comparisons++;
        if (a[i] == k) {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", comparisons);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
