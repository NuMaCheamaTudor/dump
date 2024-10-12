#include <stdio.h>
int v[10];
int main() {
int *pv, *pv1, i;
pv = v;
*(pv + 1) = 10; *(pv + 4) =4; *(pv - 3) = 1;
pv1 = &(*(pv++)); *(pv1+5) =11; *(pv1+8) = v[2] - 4;
for(i=0; i<9; i++) printf("%d ", i+v[i]);
}
