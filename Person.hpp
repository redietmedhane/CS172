#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

class Person {
private:
    int debt;
    int supporters;
    string name;
    char party;
    vector<string> policies;
    
    int pci;
    int gpi;
    int enviro;
    int riots;
public:
    Person(string, char);
    
    int policyPass();
    void Riot();
    void gainDebt();
    void loseDebt();
    void gainPCI();
    void losePCI();
    void gainGPI();
    void loseGPI();
    void gainEnviro();
    void loseEnviro();
    
    
    int getDebt();
    int getRiots();
    int getSupporters();
    int getEnviro();
    int getPower();
    int getPC();
    char getParty();
    
    void gainSupport();
    void loseSupport();
    bool addPolicy();
    
    void output();
    void checkFail();
    
    void collapse();
    void success();
    
    void Republican();
    void Democrat();
};


#endif /* Person_hpp */
