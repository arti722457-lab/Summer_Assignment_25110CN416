#include <stdio.h>

int main() {
    int arr[100], n, i, j, sum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == sum) {
                printf("Pair: %d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }

    printf("No pair found");

    return 0;
}