#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//prototyping Declearing the functions
void wheels();
void wheels2(string,string);
string wheels3(string,string);

int main(){
    wheels();
    wheels2("breaks","squeak squeak squeak");
    wheels2("wipers","swish swish swish");
    cout << wheels3("driver","please sit down");
    
    ofstream output;
    output.open("output.txt");
    output << wheels3("wheels","round and round");
    output << wheels3("breaks","squeak squeak squeak");
    output << wheels3("wipers","swish swish swish");
    output << wheels3("driver","please sit down");
    output.close();
    return 0;
}

void wheels()
{
    cout <<"The wheels on the bus goes round and round."<<endl
    <<"round and round, round and round."<<endl
    <<"The wheels on the bus go round and round"<<endl
    <<"all trought the town."<<endl<<endl;
}

void wheels2(string object, string action)
{
    cout <<"The "<< object <<" on the bus goes "<< action  <<"."<<endl
    << action <<", "<< action <<"."<<endl
    <<"The "<< object <<" on the bus go "<< action <<" "<<endl
    <<"all trought the town."<<endl<<endl;
}

string wheels3(string object, string action)
{
    string result = "The " + object + " on the bus says " + action + "\n";
    result = result + action +", " + action +"\n";
    result += "The " + object + " on the bus says " + action + "\n";
    result += "All through the town. \n\n";
    return result;
}