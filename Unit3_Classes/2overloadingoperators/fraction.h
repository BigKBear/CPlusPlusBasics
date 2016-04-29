/*fraction.h that contains the Fracton object
if FRACTION_H is already defined we are in the header file and if not that means the program
has not accessed the header file before 
*/
#define FRACTION_H

class Fraction{
    public:
        //constructor
        Fraction(int num, int den);
        //accessors
        int getnumer();
        int getdenom();
        double getvalue();
        //modifiers/mutators
        void setnumer(int newnum);
        void setdenom(int newden);
        void reduce();
    
    private:
        //instance variables
        int numer;
        int denom;
        //helper functions
        int gcd(int a, int b);
        
};

//adds the code in fraction.cpp file using the pre processor directive #include
#include "fraction.cpp"