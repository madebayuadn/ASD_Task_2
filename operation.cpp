#include "list.h"
#include "operation.h"


void insert_sorted(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert an infotype x into an already sorted List L
    *      so that the elements inside List L is still sorted in ascending order,
    *      procedure must also check if such number is already exists (No Duplicate number),
    *      allocate new element only if the conditions are met
    * FS : elements in List L sorted in ascending order, x is inside List L
    */

    //-------------your code here-------------

    address q, prev;
    bool found;

    q = L.first;
    prev = nullptr;
    found = false;


    while (q != nullptr && !found) {
        if (q->info < p->info) {
            prev = q;
            q = q->next;
        } else {
            found = true;
        }
    }

    p = new elmList;
    p->info = x;
    p->next = nullptr;
    if (prev == nullptr) {
        p->next = L.first;
        L.first = p;
    } else {
        p->next = q;
        prev->next = p;
    }
}


    //----------------------------------------
}
