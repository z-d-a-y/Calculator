#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int input1;
    char input2;
    int input3;
    char input4;
    char input5;
    int input6;
    bool tr = false;
    cout << "" << endl << "<<< Calculator >>>" << endl << endl;
    cout << "| HOW IT WORKS? |" << endl << "-Enter a number and enter" << endl << "-Enter One By One" << endl << endl;
    cout << "Enter: ";
    cin >> input1;
    cout << "Enter Symbol: ";
    cin >> input2;
    do {
        if (input2 == '+' || input2 == '-' || input2 == '*' || input2 == '/'){
        break;
        }
        else if (input2 != '+' || input2 != '-' || input2 != '*' || input2 != '/'){
            cout << "error" << endl;
            cout << "Enter Symbol: ";
            cin >> input2;
            }
        
    }
    while(input2 != '+' || input2 != '-' || input2 != '*' || input2 != '/');
    cout << "Enter: ";
    cin >> input3;
    do {
        if (isdigit(input3)){
        break;
        }
        else if (isdigit(input3)){
            cout << "error" << endl;
            cout << "Enter: ";
            cin >> input3;
            }
        
    }
    while(isdigit(input3));
    cout << "Continue(y/n): ";
    cin >> input4;
    do {
        if (input4 == 'y' || input4 == 'Y' || input4 == 'n' || input4 == 'N'){
        break;
        }
        else if (input4 != 'y'|| input4 != 'Y' || input4 != 'n' || input4 != 'N'){
            cout << "error" << endl;
            }
        
    }
    while(input2 != 'n'|| input2 != 'N');
    if (input4 == 'n' || input4 == 'n' || input4 == 'N' || input4 == 'N'){
    if (input2 == '+'){
        cout << input1 << " + " << input3;printf(" = %d", input1 + input3);
    }
    else if (input2 == '-'){
        cout << input1 << " - " << input3;printf(" = %d", input1 - input3);
    }
    else if (input2 == '*'){
        cout << input1 << " * " << input3;printf(" = %d", input1 * input3);
    }
    else if (input2 == '/' && input2 > 0){
        cout << input1 << " / " << input3;printf(" = %d", input1 / input3);
    }
    }
    if (input4 == 'y' || input4 == 'Y'){
    cout << "Enter Symbol: ";
    cin >> input5;
    cout << "Enter: ";
    cin >> input6;
    if (input2 == '+' && input5 == '+'){
        cout << input1 << " + " << input3  << " + " << input6;printf(" = %d", input1 + input3 + input6);
    }
    else if (input2 == '-' && input5 == '-'){
        cout << input1 << " - " << input3  << " - " << input6;printf(" = %d", input1 - input3 - input6);
    }
    else if (input2 == '*' && input5 == '*'){
        cout << input1 << " * " << input3  << " * " << input6;printf(" = %d", input1 * input3 * input6);
    }
    else if (input2 == '/' && input5 == '/' && input2 > 0){
        cout << input1 << " / " << input3  << " / " << input6;printf(" = %d", input1 / input3 / input6);
    }
    else if (input2 == '+' && input5 == '-'){
        cout << input1 << " + " << input3  << " - " << input6;printf(" = %d", input1 + input3 - input6);
    }
    else if (input2 == '-' && input5 == '+'){
        cout << input1 << " - " << input3  << " + " << input6;printf(" = %d", input1 - input3 + input6);
    }
    else if (input2 == '/' && input5 == '*' && input2 > 0){
        cout << input1 << " / " << input3  << " * " << input6;printf(" = %d", input1 / input3 * input6);
    }
    else if (input2 == '*' && input5 == '/'){
        cout << input1 << " * " << input3  << " / " << input6;printf(" = %d", input1 * input3 / input6);
    }
    else if (input2 == '+' && input5 == '*'){
        cout << input1 << " + " << input3  << " * " << input6;printf(" = %d", input1 + input3 * input6);
    }
    else if (input2 == '*' && input5 == '+' && input2 > 0){
        cout << input1 << " * " << input3  << " + " << input6;printf(" = %d", input1 * input3 + input6);
    }
    else if (input2 == '+' && input5 == '/'){
        cout << input1 << " + " << input3  << " / " << input6;printf(" = %d", input1 + input3 / input6);
    }
    else if (input2 == '/' && input5 == '+'){
        cout << input1 << " / " << input3  << " + " << input6;printf(" = %d", input1 / input3 + input6);
    }
    else if (input2 == '-' && input5 == '*' && input2 > 0){
        cout << input1 << " - " << input3  << " * " << input6;printf(" = %d", input1 - input3 * input6);
    }
    else if (input2 == '*' && input5 == '-'){
        cout << input1 << " * " << input3  << " - " << input6;printf(" = %d", input1 * input3 - input6);
    }
    else if (input2 == '-' && input5 == '/'){
        cout << input1 << " / " << input3  << " - " << input6;printf(" = %d", input1 / input3 - input6);
    }
    else if (input2 == '*' && input5 == '/' && input2 > 0){
        cout << input1 << " * " << input3  << " / " << input6;printf(" = %d", input1 * input3 / input6);
    }
    else if (input2 == '/' && input5 == '*'){
        cout << input1 << " / " << input3  << " * " << input6;printf(" = %d", input1 / input3 * input6);
    }

    return 0;
}
}
