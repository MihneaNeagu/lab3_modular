#include "secv4.h"
#include <iostream>

using  namespace std;

void secv4(int n, int v[]) {
    int i, lmax, pmax, pc, lc;
    lmax = 0;
    lc = 1;
    pc = 1;
    for (i = 2; i <= n; i++) {
        if (v[i] < v[i - 1]) {
            lc++;
        } else {
            lc = 1;
            pc = i;
        }
        if (lmax < lc) {
            lmax = lc;
            pmax = pc;
        }
    }
    for (i = pmax; i <= pmax + lmax - 1; i++) {
        cout << v[i] << " ";

    }
}
