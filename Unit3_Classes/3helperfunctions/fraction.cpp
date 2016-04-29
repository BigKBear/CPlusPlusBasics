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
    reduce();
}

//allow whole numbers
Fraction::Fraction(int num){
    numer = num;
    denom = 1;
}

Fraction::Fraction(){
    denom = 1;
    numer = 0;
}

/*For values like 4.31 that does not have an interger numberator
4.31 = 4.31/1 = 43.1/10 = 431/100
*/
Fraction::Fraction(double value){
    int num = (int)(value);
    int den = 1;
    //while the absolute value is not True
    while(abs(value - num) > 0.000001){
        value *= 10;
        num = (int)(value);
        den *= 10;
    }
    numer = num;
    denom = den;
    reduce();
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

/*greatest common devisor
24 and 54
54 and 24
24 and 6
6 and 0
*/
int Fraction::gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

void Fraction::reduce(){
    int GCD = gcd(numer, denom);
    numer /= GCD;
    denom /= GCD;
}