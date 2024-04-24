#include <iostream>

#include "DeletionPolicy.h"
#include "SmartPtr.h"

using namespace std;

typedef void (*delete_int_t)(int *);
void delete_int(int *p) { delete p; }

int main(int argc, char *argv[])
{
    cout << "Hello World" << endl;

    // Creation d'un objet en s'appuyant implicitement sur l'operateur () du type 'DeleteByOperator'
    SmartPtr p1(new int(42));

    // Creation d'un objet en declarant explicitement l'operateur () du type 'DeleteByOperator'
    SmartPtr<int, DeleteByOperator> p2(new int(42), DeleteByOperator());

    // Creation d'un objet en indiquant la fonction a utiliser. Le proto de la fonction doit correspondre au type indique dans le template.
    SmartPtr<int, delete_int_t> p3(new int(33), delete_int);

    cout << *p1 << endl;
    *p1 = 3;

    return 0;
}