#include <iostream>
#include <cassert>

using namespace std;

void test() {
    int v1[] = {1, 2, 3, 4, 4};
    int v2[] = {2, 3, 7, 5, 4, 11};
    assert(v1[0] == 1);
    assert(v2[0] == 2);
    assert(v1[1] == 2);
    assert(v2[1] == 3);
    assert(v1[2] == 3);
    assert(v2[2] == 7);
    assert(v1[3] == 4);
    assert(v2[3] == 5);

    cout << "Toate testele au rulat cu succes!" << endl;
}
