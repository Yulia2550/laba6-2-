#include "ArrCount.h"
#include "ArrMinMax.h"
#include "Arrsum.h"
#include "Arrcharact.h"
#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = { 7, 5, 9, 3, 2 };

    Arrcharact* characteristics = new Arrsum();
    characteristics->rahCharact(arr, size);

    delete characteristics;

    characteristics = new ArrMinMax();
    characteristics->rahCharact(arr, size);

    delete characteristics;

    characteristics = new ArrCount();
    characteristics->rahCharact(arr, size);

    delete characteristics;


    return 0;
}
