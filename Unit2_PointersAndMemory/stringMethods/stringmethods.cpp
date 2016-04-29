//stringMethods
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string str = "A test string";
    //constant char ter that is a pointer to the start of array
    const char *s = &str[0];
    const char *t = "another test string.";
    char u[] = "Ultimate test string.";
    char v[] = "a long and broken string, broken by spaces.Ultimate test string.";
    
    cout << str.length() << endl;
    //1.cstring can be passed by vlue or by reference
    cout << strlen(s) << endl;
    //cout << sizeof(s) / sizeof(s[0])<<endl; //this is bad
    
    //compair 
    int comp = strcmp(s,t);
   // cout<< comp << endl;
    
    if(comp< 0)
    //first string comes first
        cout << s;
    else
    //second string comes first
        cout << u;
    
    cout<< " comes first lexicographically."<<endl;
    
    //break appart the char array by spaces
    char *token = strtok(v, " ");
    while (token != NULL){
        cout << token <<endl;
        token = strtok(NULL, " ");
    }
    
    //cheate a c type string with 15 spaces
    char output[15];
    strncat(output, s, 4);
    strncat(output, &t[3], 5);
    //get substrings
    strncat(output, &u[10], 6);
    cout<< output << endl;
    
    return 0;
}