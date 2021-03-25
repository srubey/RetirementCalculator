//
//  main.cpp
//  Retirement Calculator
//
//  Created by Scott Rubey on 3/24/21.
//

#include <iostream>
#include "RetCalcHeader.h"

int main(int argc, const char * argv[]) {
    int currentAge = getCurrentAge();
    int retirementAge = getRetirementAge();
    int balance = getCurrentBalance();
    int investment401k = get401kInvestment();
    
    int choice = menu();
    
    return 0;
}

int getCurrentAge(){
    int age;
    
    cout << "Enter your current age: ";
    cin >> age;
    cin.ignore(100, '\n');
    
    return age;
}

int getRetirementAge(){
    int age;
    
    cout << "Enter your projected retirement age: ";
    cin >> age;
    cin.ignore(100, '\n');
    
    return age;
}

int getCurrentBalance(){
    int balance;
    
    cout << "Enter the current total balance of all of your retirement accounts: ";
    cin >> balance;
    cin.ignore(100, '\n');
    
    return balance;
}

int get401kInvestment(){
    int investment;
    
    cout << "Enter the out-of-pocket amount you intend to invest in your 401k each year: ";
    cin >> investment;
    cin.ignore(100, '\n');
    
    return investment;
}

int menu(){
    int menuOption = 0;

    do{
        cout << "\nPlease choose from the following options:\n";
        cout << "\n1 - Change current age";
        cout << "\n2 - Change retirement age";
        cout << "\n3 - Change current investments balance";
        cout << "\n4 - Change projected annual 401k contribution";
        cout << "\n5 - Enter projected 401k employer match";
        cout << "\n6 - Enter other projected annual investments (IRA, etc)";
        cout << "\n7 - Enter projected annual rate of return on 401k and other investments";
        cout << "\n8 - Return to Main Menu\n";
        cout << "\nEnter menu option here: ";

        cin >> menuOption;
        cin.ignore(100, '\n');
        cout << endl;

        if (1 > menuOption || 8 < menuOption)
            cout << "***Option out of range***\n";

    } while (1 > menuOption || 8 < menuOption);

    return menuOption;
}
