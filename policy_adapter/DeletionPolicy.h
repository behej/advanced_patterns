#ifndef _DELETION_POLICY_H_
#define _DELETION_POLICY_H_

#include <iostream>

using namespace std;

template <typename T>
struct DeleteByOperator
{
    void operator()(T *p) const
    {
        cout << "Delete by operator()" << endl;
        delete p;
    }
};

#endif // _DELETION_POLICY_H_
