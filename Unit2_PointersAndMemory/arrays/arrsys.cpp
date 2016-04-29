//array.cpp
#include <iostream>

using namespace std;

int main(){
    //int [] a = new int[5];
    int a[5];
    
    for(int i = 0; i < 5; i++)
        a[i] = i * i + i;
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    
    int b[] = {2,3,4,5,7,11,13,17,19,29};
    cout << sizeof(b) <<endl;
    cout << sizeof(b)/sizeof(b[0]) <<endl;
    
    int size = sizeof(b)/sizeof(b[0]);
    int i = 0;
    while (i < size){
        cout <<b[i] <<" ";
        i++;
    }
    cout << endl;
    
    cout << b << " b is pointing to "<< &b[0] <<endl;
    cout << *b << " " << b[0] << endl;
    
    //using memory location to traverse
    int *c = b;
    i = 0;
    do{
        cout << *c << " "<< b[i] <<endl;
        i++;
        c++;
    }while(i < size);
    
    cout << b[197] <<endl;
    
    return 0;
}