#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int a[50], n, key, i, result;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    result = linearSearch(a, n, key);

    if(result == -1)
        printf("Not found");
    else
        printf("Found at index %d", result);

    return 0;
}

