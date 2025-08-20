// addTwoints
// AJJ 08/18/25
// Refrence
//https://www.w3schools.com/c/c_user_input.php

#include <iostream> //allows ue of Cout and Cin statements
using namespace std;

int main() {
    cout << "Welcome to my largest of three ints program. \n";

    //create variables
    int num1;
    int num2;
    int num3;
    int sumofinputs = 0;

//collect varaibles from user
    cout<< "\n Please enter vaule.";
    cin >> num1;
    cout<< "\n Value for Num1 is: " << num1;

    cout<< "\n Please enter vaule.";
    cin >> num2;
    cout<< "\n Value for Num2 is: " << num2;

    cout<< "\n Please enter vaule.";
    cin >> num3;
    cout<< "\n Value for Num3 is: " << num3;


//compare varaibles for highest value

    if (num1 > num2) {
        if (num1 > num3) {
            cout<< "\n The largest Value is: " << num1;
        }else {
            cout<< "\n The largest Value is: " << num3;
        }
    }else if (num2 > num3) {
        cout<< "\n The largest Value is: " << num2;
    }
    else {
        cout<< "\n The largest Value is: " << num3;
    }


    return 0;
}
