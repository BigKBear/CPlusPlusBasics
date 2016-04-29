/*fraction.cpp
check if the header file has already been defined
*/
#ifndef FRACTION_H
#include "fraction.h"
#endif

//Needed for overriding output stream
#include <iostream>
#include <stdlib.h> //abs use

using namespace std;

//code for the fraction class
//code for constructor
Fraction::Fraction(int num, int den){
    numer = num;
    denom = den;
 
}

//accessors
int Fraction::getnumer(){
    return numer;
}

int Fraction::getdenom(){
    return denom;
}
    
double Fraction::getvalue(){
    return (double)(numer) / denom;
}

//modifiers/mutators
void Fraction::setnumer(int newnum){
    numer = newnum;
}

void Fraction::setdenom(int newden){
    denom = newden;
}

/*we need to get pointers to an object
in java all i needed to do is name my function &+ in 
C++ we use & along with "operator"
*/
Fraction &operator+ (Fraction &lhs,Fraction &rhs){
    int commondenom = lhs.getdenom() * rhs.getdenom();
    int newnumer = lhs.getnumer() * rhs.getdenom() + rhs.getnumer() * lhs.getdenom();
    //needed to create a new location in memory to store the new sum
    Fraction *sum = new Fraction(newnumer,commondenom);
    return *sum;
}

Fraction &operator- (Fraction &lhs,Fraction &rhs){
    int commondenom = lhs.getdenom() * rhs.getdenom();
    int newnumer = lhs.getnumer() * rhs.getdenom() - rhs.getnumer() * lhs.getdenom();
    //needed to create a new location in memory to store the new sum
    Fraction *diff = new Fraction(newnumer,commondenom);
    return *diff;
}

Fraction &operator* (Fraction &lhs,Fraction &rhs){
    int commondenom = lhs.getdenom() * rhs.getdenom();
    int newnumer = lhs.getnumer() * rhs.getnumer();
    //needed to create a new location in memory to store the new sum
    Fraction *product = new Fraction(newnumer,commondenom);
    return *product;
}

Fraction &operator/ (Fraction &lhs,Fraction &rhs){
    int commondenom = lhs.getdenom() * rhs.getnumer();
    int newnumer = lhs.getnumer() * rhs.getdenom();
    //needed to create a new location in memory to store the new sum
    Fraction *quotient = new Fraction(newnumer,commondenom);
    return *quotient;
}

//like files we can over write the insertion operator
ostream &operator<< (ostream &out, Fraction &rhs){
    out << rhs.getnumer() << "/" << rhs.getdenom();
}