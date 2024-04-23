#include <iostream>

#include "SmartPtr.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World" << endl;

    SmartPtr<int> p{new int};

    *p = 3;

    return 0;
}