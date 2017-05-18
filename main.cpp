#include <iostream>
#include <string>
#include <vector>
#include "Person.hpp"
#include "Person.cpp"
using namespace std;

int main() {
    cout << "Hello Congressional Representative! Welcome to your new position here in Washington, D.C.";
    
    string n;
    char p = '\0';
    cout << endl << "What is your name? ";
    cin >> n;
    cout << endl << endl;
    cout << "What is your party affiliation (D or R)? ";
    cin >> p;
    
    while (p != 'r' && p != 'd' && p != 'R' && p!= 'D') {
        cout << "What is your party affiliation (D or R)? ";
        cin >> p;
    }
    
    char validate;
    if (p == 'R' || p == 'r') {
        cout << "Oh, so you're a Republican (Y or N)? ";
        cin >> validate;
    }
    else {
        cout << "Oh, so you're a Democrat (Y or N)? ";
        cin >> validate;
    }
    
    while (validate == 'n' || validate == 'N') {
        cout << "What is your party affiliation (D or R)? ";
        cin >> p;
        
        if (p == 'R' || p == 'r') {
            cout << "Oh, so you're a Republican (Y or N)? ";
            cin >> validate;
        }
        else {
            cout << "Oh, so you're a Democrat (Y or N)? ";
            cin >> validate;
        }
    }
    
    Person p1 (n, p);
    
    if (p1.getParty() == 'R' || p1.getParty() == 'r') {
        p1.Republican();
    }
    else {
        p1.Democrat();
    }
    
    
    
    
    
    return 0;
}







