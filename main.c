#include <stdio.h>
#include <stdlib.h>

const int N = 8;

int b(int leftt, int rightt, int keyy, int kk[], int nn, int midd) {
    if (leftt > rightt) { return -1; }

    int mid = (leftt + rightt) / 2;
    if (midd == mid)
        return -1;
    else
        midd = mid;

    if (keyy == kk[mid]) {
        return mid;
    }
    if (keyy < kk[mid])
        return b(leftt, mid, keyy, kk, nn, midd);
    else
        return b(mid, rightt, keyy, kk, nn, midd);

}

int main() {

    int i, kk, mass[N], ab, k;
    for (i = 0; i < N; i++) {
        mass[i] = i + 3;

    }
    printf("\nA:\n");
    for (kk = 0; kk < N; kk++) {
        printf("% d", mass[kk]);
    }
    printf("\n");
    scanf("%d", &ab);
    int t = -1;
    k = b(0, N - 1, ab, mass, N, t);
    if (k != -1) {
        printf("The index of the element is %d\n", k);
    } else
        printf("The element isn't found!\n");
}