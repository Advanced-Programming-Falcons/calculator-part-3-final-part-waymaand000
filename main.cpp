#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

//global variables
int num1, num2;
char operation;
string input;

string addition(int i1, int i2);
string subtraction(int i1, int i2);
string multiplication(int i1, int i2);
string division(int i1, int i2);
string power(int i1, int i2);
bool parseInput();
void history(string h);

int main(void){
    string hist = "History: \n";

    while (true){
    operation = '0';
    num1 = 0;
    num2 = 0;
    string out = "A";
    
    cout << "enter an opetation with spaces between operaters using the operations +,-,*,/,^, and h for history" << endl << "ex. (1 + 1)" << endl;
    getline(cin, input);
    if (input == "h"||input == "H"){
        history(hist);
    }else{
    parseInput();
    switch(operation){
        case '+': case 'a':
        out = addition(num1, num2);
        hist = hist + to_string(num1) + " + " + to_string(num2) + " = " + out + "; \n"; 
    

        break;

        case '-': case 's':
        out = subtraction(num1, num2);
        hist = hist + to_string(num1) + " - " + to_string(num2) + " = " + out + "; \n";
        break;

        case '*': case 'm':
        out = multiplication(num1, num2);
        hist = hist + to_string(num1) + " * " + to_string(num2) + " = " + out + "; \n";
        break;

        case '/': case 'd':
        out = division(num1, num2);
        hist = hist + to_string(num1) + " / " + to_string(num2) + " = " + out + "; \n";
        break;

        case '^': case 'e':
        out = power(num1, num2);
        hist = hist + to_string(num1) + " ^ " + to_string(num2) + " = " + out + "; \n";
        break;

        //case 'h': case 'H':
        //history(hist);
        //break;

        default:
        cout << "Try Again" << endl;

    }
    }
    

    }
    return 0;
}
    
    string addition(int i1, int i2){
        int output = 0;
        output = i1 + i2;
        cout << "The result is:" << output << endl;
        return to_string(output);
    } 
    string subtraction(int i1, int i2){
        int output = 0;
        output = i1 - i2;
        cout << "The result is:" << output << endl;
        return to_string(output);
    }
     string multiplication(int i1, int i2){
        int output = 0;
        output = i1 * i2;
        cout << "The result is:" << output << endl;
        return to_string(output);
    }
     string division(int i1, int i2){
        float output = 0;
        output = i1 / i2;
        cout << "The result is:" << output << endl;
        return to_string(output);
    }
     string power(int i1, int i2){
        int output = 0;
        int change = 0;
        
        change = i1;
        for (int num=1; num < i2; num++){
            i1 = i1 * change;
        }
        output = i1;
        cout << "The result is:" << output << endl;
        return to_string(output);
    } 
    void history(string h){
        cout << h;
    
    }
    bool parseInput(){
        istringstream iss(input);
        if ( iss >> num1 >> operation >> num2){
            return true;
        }
        return false;
    }