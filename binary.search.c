#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key)
            return mid;
        else if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int a[50], n, key, i, result;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    result = binarySearch(a, n, key);

    if(result == -1)
        printf("Not found");
    else
        printf("Found at index %d", result);

    return 0;
}

