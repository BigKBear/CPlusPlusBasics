//fractionmain.cpp
#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
    Fraction f1(4, 2);
    Fraction f2(5, 8);
    
    cout << f1.getnumer() << "/" << f1.getdenom() << endl;
    f2.setdenom(6);
    f2.setnumer(9);
    
    cout << f2.getvalue() << endl;
    
    return 0;
}