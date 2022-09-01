/*
* Make a normal calculator.
* Keep answer until user decides to move on.
*                   or
* At least keep the program running after
* the program done with its calculation.
*
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //set variables
    string op;
    double num1, num2;

    //choose operator
    cout << "Choose your operator:" << setw(5);
    cout << "+" << setw(5) << "-"
         << setw(5) << "*" << setw(5)
         << "/" << endl;
    cin >> op;

    //calculation being done
    if (op == "+") {
        //enter 2 numbers
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        cout << num1 << " + " << num2
             << " = " << num1 + num2 << endl << endl;
    }
    else if (op == "-") {
        //enter 2 numbers
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        cout << num1 << " - " << num2
             << " = " << num1 - num2 << endl << endl;
    }
    else if (op == "*") {
        //enter 2 numbers
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        cout << num1 << " * " << num2
             << " = " << num1 * num2 << endl << endl;
    }
    else if (op == "/") {
        //enter 2 numbers
        cout << "Enter Num1 and Num2:\n";
        cin >> num1;
        cin >> num2;

        cout << num1 << " / " << num2
             << " = " << num1 / num2 << endl << endl;
    }
    else {
        cout << "Not within the parameter.\n\n";
    }

    //return to main
    return main();
}