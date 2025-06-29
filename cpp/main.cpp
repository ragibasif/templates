#include "dbg.h"
#include <cassert>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    dbg(argc);
    for (int i = 0; i < argc; i++) {
        dbg(argv[i]);
    }

    cout << "Hello, World!" << endl;

    return 0;
}
