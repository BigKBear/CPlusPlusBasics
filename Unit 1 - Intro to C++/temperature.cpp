//temperature.cpp
#include<iostream>

using namespace std;

int main(){
    int response =4;
    do{
        double fahrenheit;
        cout << "Enter temp in Fahrenheit: ";
        cin >> fahrenheit;
        
        cout<< "Choose:" << endl 
            <<"\t 1 - Celsius" << endl
            <<"\t 2 - Kelvin" << endl
            <<"\t 3 - Rankine" << endl
            <<"\t 0 - QUIT" << endl
            <<"Your choice: ";
        
        cin >> response;
        
        double output;
        
        switch (response)
        {
            case 0: break;
            case 1: output = (fahrenheit - 32) * 5 / 9;
                    break;
            case 2: output = (fahrenheit - 32) * 5 / 9 + 253.15;
                    break;
            case 3: output = fahrenheit + 459.67;
                    break;
            default: cout <<"Bad input: " << response << ". Try again."<<endl;
        }//switch
        
        if (response == 0)
            break;
        if ((response == 2 || response == 3) && output < 0)
            cout << "Invalid initial temperature: "<< fahrenheit << ". Try again." << endl;
        else{
            cout << "Converted temperature: ";
            switch (response)
            {
                case 1: cout << output << " C" <<endl;
                        break;
                case 4: cout << output << " K" <<endl;
                        break;
                case 3: cout << output << " R" <<endl;
                        break;
                default: cout << "Impossiable to determine."<< endl;
            }//switch
        }//else
    }while(response != 0);//do ... while
    
    return 0;
}