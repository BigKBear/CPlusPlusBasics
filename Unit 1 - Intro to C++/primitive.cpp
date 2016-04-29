#include <iostream>

using namespace std;

int main(){
    //int num; //2147483647
    //short num; //-32767
    //long num; //9223372036854775806
    //unsigned short num; //65535
    //unsigned int num; //4294967295
    float num; //4 bites
    //double num; //8 bites
    //long double num; //16 bites
    
    
    cout << "double? ";
    cin >> num;
    
    cout << num << endl;
    //num ++;
    
    //num = num + 0.1; //double, long double
    num = num + 0.1;
    cout << num <<endl;
    
    return 0;
}