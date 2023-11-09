#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr, int i, int j){
    while (i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int *arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);
        i--;
        j--;
        reverse(arr, i, j);
    }

    for (int y = 0; y < n; y++) {
        printf("%d ", arr[y]);
    }

    free(arr);
    return 0;
}

