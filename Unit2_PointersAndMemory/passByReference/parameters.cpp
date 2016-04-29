//parameters.cpp
#include <iostream>
using namespace std;

//prototype
void a(int x, int y);
void b(int x, int &y);
void c(int &x, int &y);

int main(){
    int m = 3, n = 5;
    cout << "&m = " << &m << ", &n = "<< &n << endl <<endl;
    cout << "m = "<< m << ", n = "<< n << endl;
    a(m, n);
    cout << "m = " << m << ", n = "<< n << endl;
    b(m, n);
    cout << "m = " << m << ", n = "<< n << endl;
    c(m, n);
    cout << "m = " << m << ", n = "<< n << endl;
    cout << "&m = " << &m << ", &n = "<< &n << endl <<endl;
    
    return 0;
}

void a (int x, int y){
    cout << "&x = " << &x << ", &y = "<< &y << endl <<endl;
    x++;
    y++;
    cout << "x = "<< x << ", y ="<< y << endl;
}

//passing y by reference
void b (int x, int &y){
    cout << "&x = " << &x << ", &y = "<< &y << endl <<endl;
    x++;
    y++;
    cout << "x = "<< x << ", y ="<< y << endl;
}

//passing x and y by reference
void c (int &x, int &y){
    cout << "&x = " << &x << ", &y = "<< &y << endl <<endl;
    x++;
    y++;
    cout << "x = "<< x << ", y ="<< y << endl;
}