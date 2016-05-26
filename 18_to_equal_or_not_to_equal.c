/*
 * 18 - To equal or not to equal
 */
#include <stdio.h>
#include <stdbool.h>

bool intarraycmp(int arr1[], int sizeA, int arr2[], int sizeB);
bool mem_cmp(void * arr1, void * arr2, unsigned sizeBytes);

int main() {
    int a[] = {1, 2, 3, 4};
    return 0;
}

bool intarraycmp(int arr1[], int sizeA, int arr2[], int sizeB) {
    if (sizeA != sizeB)
        return false;
    for (int i = 0; i < sizeA; i++) {
        if (!(arr1[i] == arr2[i]))
            return false;
    }
    return true;
}

bool mem_cmp(void * arr1, void * arr2, unsigned sizeBytes) {
    for (int i = 0; i < sizeBytes; i++) {
        if (((char*) arr1)[i] == ((char*) arr2)[i])
            return false;
    }
    return true;
}

