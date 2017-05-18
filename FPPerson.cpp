//
//  Person.cpp
//  CS Govt Final
//
//  Created by Tristan Robins on 5/2/17.
//  Copyright © 2017 Tristan Robins. All rights reserved.
//

#include "Person.hpp"
using namespace std;

Person::Person(string n, char p) {
    debt = 20000;
    pci = 50;
    enviro = 10;
    name = n;
    party = p;
    if (party == 'R' || party == 'r') {
        supporters = 40;
        gpi = 45;
        riots = 2;
    }
    else {
        supporters = 60;
        gpi = 55;
        riots = 0;
    }
}

int Person::policyPass() {
    srand(time(NULL));
    int pass = rand() % 11;
    
    return pass;
}

void Person::Riot() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int add = rand() % 4;
        riots += add;
        
        cout << "Riots have increased by " << add << "." << endl;
    }
    
    else {
        int add = rand() % 2;
        riots += add;
        
        cout << "Riots have increased by " << add << "." << endl;
    }
}

void Person::gainDebt() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int add = rand() % 2501;
        debt += add;
        
        cout << "You have added $" << add << " to the debt." << endl;
    }
    
    else {
        int add = rand() % 5001;
        debt += add;
        
        cout << "You have added $" << add << " to the debt." << endl;
    }
    
}

void Person::loseDebt() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int lose = rand() % 1001;
        debt -= lose;
        
        cout << "You have caused the debt to decrease by $" << lose << "!" << endl;
    }
    
    else {
        int lose = rand() % 501;
        debt -= lose;
        
        cout << "You have caused the debt to decrease by $" << lose << "!" << endl;
    }
}

void Person::gainPCI() {
    srand(time(NULL));
    int add = rand() % 21;
    pci += add;
    
    cout << "Political correctness has increased by " << add << " according to the Political Correctness Index." << endl;
}

void Person::losePCI() {
    srand(time(NULL));
    int lose = rand() % 11;
    pci -= lose;
    
    cout << "Political correctness has decreased by " << lose << " according to the Political Correctness Index." << endl;
}

void Person::gainGPI() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int add = rand() % 6;
        gpi += add;
        
        cout << "Government power has increased by " << add << " according to the Government Power Index." << endl;
    }
    
    else {
        int add = rand() % 16;
        gpi += add;
        
        cout << "Government power has increased by " << add << " according to the Government Power Index." << endl;
    }
}

void Person::loseGPI() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int lose = rand() % 16;
        gpi -= lose;
        
        cout << "Government power has decreased by " << lose << " according to the Government Power Index." << endl;
    }
    
    else {
        int lose = rand() % 6;
        gpi -= lose;
        
        cout << "Government power has decreased by " << lose << " according to the Government Power Index." << endl;
    }
}

void Person::gainEnviro() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int add = rand() % 2;
        enviro += add;
        
        cout << "Environmental health has increased by " << add << "." << endl;
    }
    
    else {
        int add = rand() % 11;
        enviro += add;
        
        cout << "Environmental health has increased by " << add << "." << endl;
    }
}

void Person::loseEnviro() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int lose = rand() % 6;
        enviro -= lose;
        
        cout << "Environmental health has decreased by " << lose << "." << endl;
    }
    
    else {
        int lose = rand() % 2;
        enviro -= lose;
        
        cout << "Environmental health has decreased by " << lose << "." << endl;
    }
}

int Person::getDebt() {
    return debt;
}

int Person::getRiots() {
    return riots;
}

int Person::getSupporters() {
    return supporters;
}

int Person::getEnviro() {
    return enviro;
}

int Person::getPower() {
    return gpi;
}

int Person::getPC() {
    return pci;
}

char Person::getParty() {
    return party;
}

void Person::gainSupport() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int add = rand() % 16;
        supporters += add;
        
        cout << "You have gained " << add << " supporters!" << endl;
    }
    else {
        int add = rand() % 31;
        supporters += add;
        
        cout << "You have gained " << add << " supporters!" << endl;
    }
}

void Person::loseSupport() {
    srand(time(NULL));
    if (party == 'R' || party == 'r') {
        int sub = rand() % 31;
        supporters -= sub;
        
        cout << "This was a terrible decision and you have lost " << sub << " supporters." << endl;
    }
    else {
        int sub = rand() % 16;
        supporters -= sub;
        
        cout << "This was a terrible decision and you have lost " << sub << " supporters." << endl;
    }
    Riot();
}

bool Person::addPolicy() {
    int pass = policyPass();
    
    if (pass >= 8) {
        return false;
    }
    
    else {
        return true;
    }
}

void Person::output() {
    cout << endl << endl;
    cout << "As it stands, your statistics for the shape and health of the government are as follows:" << endl;
    cout << "Debt: " << getDebt() << endl;
    cout << "Supporters: " << getSupporters() << endl;
    cout << "Riots: " << getRiots() << endl;
    cout << "Government Power (0-100): " << getPower() << endl;
    cout << "Environment Health (0-25): " << getEnviro() << endl;
    cout << "Political Correctness (0-100): " << getPC() << endl;
    cout << endl << endl << "-------------------------------------------------" << endl << endl;
}

void Person::checkFail() {
    if (debt >= 35000 || supporters <= 0 || pci >= 90 || pci <= 10 || gpi >= 90 || gpi <= 10 || enviro <= 0 || riots >= 10) {
        collapse();
    }
}

void Person::collapse() {
    cout << "The government has fallen as a result of your bad choices. Way to go, Lousy Politician." << endl;
    exit(0);
}

void Person::success() {
    cout << "The government has lasted through your term as Congressperson! Congrats!" << endl;
}










void Person::Republican() {
    int ans1;
    cout << "An epidemic is suddenly spreading through the country." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Quarantine the infected and don't share the severity to the public." << endl;
    cout << "2) Try to find a cure by using the government's budget." << endl;
    cin >> ans1;
    if (ans1 == 1) {
        if (addPolicy() == true) {
            cout << "Your Quarantine policy passed through Congress and was implemented!" << endl;
            policies.push_back("Quarantine");
            gainPCI();
            gainGPI();
            Riot();
            loseSupport();
        }
        else {
            cout << "Your Quarantine policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans1 == 2) {
        if (addPolicy() == true) {
            cout << "Your Cure policy passed through Congress and was implemented!" << endl;
            policies.push_back("Cure");
            gainDebt();
            loseSupport();
        }
        else {
            cout << "Your Cure policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans2;
    cout << "THIS JUST IN: People have found Bigfoot! The country is excited and yet conflicted on what to do." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) This is a problem. Send the military in to find and detain Bigfoot." << endl;
    cout << "2) This is a natural wonder. Side with the environmentalists and save Bigfoot." << endl;
    cin >> ans2;
    if (ans2 == 1) {
        if (addPolicy() == true) {
            cout << "Your Detain policy passed through Congress and was implemented!" << endl;
            policies.push_back("Detain");
            gainDebt();
            loseSupport();
            gainGPI();
        }
        else {
            cout << "Your Detain policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans2 == 2) {
        if (addPolicy() == true) {
            cout << "Your Save policy passed through Congress and was implemented!" << endl;
            policies.push_back("Save");
            gainPCI();
            loseSupport();
            gainEnviro();
        }
        else {
            cout << "Your Save policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans3;
    cout << "North Korea claims to have a missle that will reach your country." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Panic! Spend more money on military and nuclear research and response." << endl;
    cout << "2) Publically display no response, but secretly send in spies to get further intel." << endl;
    cin >> ans3;
    if (ans3 == 1) {
        if (addPolicy() == true) {
            cout << "Your Military Spending policy passed through Congress and was implemented!" << endl;
            policies.push_back("Military");
            gainDebt();
            losePCI();
            Riot();
        }
        else {
            cout << "Your Military Spending policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans3 == 2) {
        if (addPolicy() == true) {
            cout << "Your Spies policy passed through Congress and was implemented!" << endl;
            policies.push_back("Spies");
            gainGPI();
            gainSupport();
        }
        else {
            cout << "Your Spies policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans4;
    cout << "Your bordering friendly country's government has collapsed and they want your country to take their territory." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Deny the offer and offer aid in reconstructing their country." << endl;
    cout << "2) Accept the offer and use it as the 51st state and repeat colonialism." << endl;
    cin >> ans4;
    if (ans4 == 1) {
        if (addPolicy() == true) {
            cout << "Your Foreign Aid policy passed through Congress and was implemented!" << endl;
            policies.push_back("Aid");
            gainGPI();
            gainSupport();
            loseEnviro();
        }
        else {
            cout << "Your Foreign Aid policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans4 == 2) {
        if (addPolicy() == true) {
            cout << "Your Annexing policy passed through Congress and was implemented!" << endl;
            policies.push_back("Annex");
            gainDebt();
            gainEnviro();
            gainGPI();
            loseSupport();
        }
        else {
            cout << "Your Annexing policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans5;
    cout << "Your rival campaign runner-up Darth Vader has been converting people to a strange cult called 'The Dark Side.'" << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Call him out and show your country your true stance on the issue." << endl;
    cout << "2) Stay quiet about it but research its validity." << endl;
    cin >> ans5;
    if (ans5 == 1) {
        if (addPolicy() == true) {
            cout << "Your Talk with Darth Vader was approved by Congress. One Congressperson's life was lost via Force Choke." << endl;
            policies.push_back("Vader");
            losePCI();
            gainSupport();
        }
        else {
            cout << "Your Talk with Darth Vader wasn't approved by Congress and never happened." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans5 == 2) {
        if (addPolicy() == true) {
            cout << "Your Research of the Dark Side policy passed through Congress and was implemented!" << endl;
            policies.push_back("Research");
            gainDebt();
            gainGPI();
        }
        else {
            cout << "Your Research of the Dark Side policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans6;
    cout << "You get news all over the country that people want the government to invest in hovercrafts." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Give a speech about why you will not invest." << endl;
    cout << "2) Propose a bill allotting a sum of the countries expenditures on hovercraft research and purchasing." << endl;
    cin >> ans6;
    if (ans6 == 1) {
        if (addPolicy() == true) {
            cout << "Your Hovercraft Speech was approved by Congress." << endl;
            policies.push_back("Speech");
            loseSupport();
            Riot();
            loseDebt();
        }
        else {
            cout << "Congress really likes hovercrafts and overruled your power." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans6 == 2) {
        if (addPolicy() == true) {
            cout << "Your Hovercraft policy passed through Congress and was implemented!" << endl;
            policies.push_back("Hovercraft");
            gainDebt();
            gainSupport();
            gainGPI();
        }
        else {
            cout << "Your Hovercraft policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans7;
    cout << "A tunnel collapse at a nuclear site has left the small town of KnoWhere radioactive." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Have all citizens evacuate and spend your government budget on decontamination." << endl;
    cout << "2) Leave this up to the state governments. This is their issue, not yours." << endl;
    cin >> ans7;
    if (ans7 == 1) {
        if (addPolicy() == true) {
            cout << "Your Decontamination policy passed through Congress and was implemented!" << endl;
            policies.push_back("Decontamination");
            gainDebt();
            loseSupport();
            loseEnviro();
        }
        else {
            cout << "Your Decontamination policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans7 == 2) {
        if (addPolicy() == true) {
            cout << "Your States Rights policy passed through Congress and was implemented!" << endl;
            policies.push_back("States");
            loseDebt();
            loseEnviro();
            losePCI();
            Riot();
        }
        else {
            cout << "Your States Rights policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans8;
    cout << "The people in your party want you to change how the education system is run." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) Act upon this by admitting religion back into public school campuses and having year round school." << endl;
    cout << "2) Use your budget to fire all the bad teachers stuck in the system and hire new and well qualified teachers." << endl;
    cin >> ans8;
    if (ans8 == 1) {
        if (addPolicy() == true) {
            cout << "Your Religious Schools policy passed through Congress and was implemented!" << endl;
            policies.push_back("Religion");
            gainSupport();
            losePCI();
            loseGPI();
            Riot();
        }
        else {
            cout << "Your Religious Schools policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans8 == 2) {
        if (addPolicy() == true) {
            cout << "Your Firing Teachers policy passed through Congress and was implemented!" << endl;
            policies.push_back("Teachers");
            gainDebt();
            gainSupport();
            gainGPI();
            Riot();
        }
        else {
            cout << "Your Firing Teachers policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    
    int ans9;
    cout << "WAR HAS COME! Your country is going to battle against the country of Martianstan. They bombed Seattle because they thought the Space Needle was a weapon." << endl;
    cout << "What do you do (1 or 2)? " << endl;
    cout << "1) FIRE BACK! Use all your military forces on them and enforce your country to help supply and equip the army." << endl;
    cout << "2) Try to come to an understanding with the enraged martians by meeting with their leader." << endl;
    cin >> ans9;
    if (ans9 == 1) {
        if (addPolicy() == true) {
            cout << "Your Attack policy passed through Congress and was implemented!" << endl;
            policies.push_back("Attack");
            gainSupport();
            losePCI();
            gainDebt();
            loseEnviro();
            Riot();
        }
        else {
            cout << "Your Attack policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans9 == 2) {
        if (addPolicy() == true) {
            cout << "Your Diplomacy policy passed through Congress and was implemented!" << endl;
            policies.push_back("Diplomacy");
            gainGPI();
            gainPCI();
            loseDebt();
        }
        else {
            cout << "Your Diplomacy policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid response." << endl;
    
    output();
    checkFail();
    success();
}

void Person::Democrat() {
    int ans1;
    cout << "University of Kentucky requests you make a speech on their campus. What do you do (1 or 2)? " << endl;
    cout << "1) You give a speech at the Conservative school." << endl;
    cout << "2) You write a letter to the Conservative school." << endl;
    cin >> ans1;
    if (ans1 == 1) {
        if (addPolicy() == true) {
            cout << "Your College Speech went over very well!" << endl;
            policies.push_back("Speech");
            loseSupport();
        }
        else {
            cout << "You get booed off stage during your College Speech." << endl;
            gainDebt();
            loseGPI();
            Riot();
        }
    }
    else if (ans1 == 2) {
        if (addPolicy() == true) {
            cout << "Your Written Letter was appreciated by the school!" << endl;
            policies.push_back("Diplomacy");
            gainSupport();
            gainPCI();
            gainGPI();
        }
        else {
            cout << "The school didn't appreciate your letter." << endl;
            gainDebt();
            loseGPI();
            Riot();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    
    int ans2;
    cout << "The current welfare policy is proving ineffective. What do you do (1 or 2)? " << endl;
    cout << "1) Impose a new tax on the wealthy to redistribute the wealth." << endl;
    cout << "2) Repurpose current government budget to go towards education instead." << endl;
    cin >> ans2;
    if (ans2 == 1) {
        if (addPolicy() == true) {
            cout << "Your Tax Reform policy passed through Congress and was implemented!" << endl;
            policies.push_back("Taxes");
            gainDebt();
            gainSupport();
            gainGPI();
        }
        else {
            cout << "Your Tax Reform policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans2 == 2) {
        if (addPolicy() == true) {
            cout << "Your Government Budget policy passed through Congress and was implemented!" << endl;
            policies.push_back("Budget");
            gainSupport();
            loseDebt();
            gainGPI();
        }
        else {
            cout << "Your Government Budget policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    
    int ans3;
    cout << "There was a recent shooting where an officer shot a pedestrian. What do you do (1 or 2)? " << endl;
    cout << "1) Show support for the pedestrians family and community." << endl;
    cout << "2) Defend the officer's actions." << endl;
    cin >> ans3;
    if (ans3 == 1) {
        if (addPolicy() == true) {
            cout << "Your Support for the Community has been heard and accepted!" << endl;
            policies.push_back("Support");
            gainSupport();
            gainPCI();
            gainGPI();
        }
        else {
            cout << "Your words came out wrong and your Support for the Community was not received." << endl;
            gainDebt();
            loseGPI();
            loseSupport();
            Riot();
        }
    }
    else if (ans3 == 2) {
        if (addPolicy() == true) {
            cout << "Defending the Officer was the wrong decision and now your party despises you." << endl;
            policies.push_back("Officer");
            loseSupport();
            losePCI();
            loseGPI();
        }
        else {
            cout << "As it turns out, your Defense of the Officer aligned with what was recorded on the officer's body camera." << endl;
            gainSupport();
            losePCI();
            gainGPI();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    
    int ans4;
    cout <<"Your GOP colleague is asking for your help on passing a policy. What do you do (1 or 2)? "<< endl;
    cout << "1) Undermine him and vote against the policy." << endl;
    cout << "2) Help a brotha out!" << endl;
    cin >> ans4;
    if (ans4 == 1) {
        if (addPolicy() == true) {
            cout << "Your Undermining Initiative worked!" << endl;
            policies.push_back("Undermining");
            gainSupport();
            gainDebt();
            gainGPI();
        }
        else {
            cout << "Your Undermining Initiative backfired and now most politicians hate you." << endl;
            gainDebt();
            loseGPI();
            Riot();
        }
    }
    else if (ans4 == 2) {
        if (addPolicy() == true) {
            cout << "Your Helping of a GOP Colleague has helped your image!" << endl;
            policies.push_back("Colleague");
            gainSupport();
            gainGPI();
        }
        else {
            cout << "Your Democratic Colleagues dislike you now." << endl;
            loseGPI();
            losePCI();
            loseSupport();
            gainDebt();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    
    int ans5;
    cout << "There has been a recent oil spill off the coast of your country. What do you do (1 or 2)? " << endl;
    cout << "1) Condemn oil companies and Wall Street and put the burden of cleaning the mess on them." << endl;
    cout << "2) Employ the EPA and use government funds to clean the mess." << endl;
    cin >> ans5;
    if (ans5 == 1) {
        if (addPolicy() == true) {
            cout << "Your 'Make Wall Street Pay Again' policy passed through Congress and was implemented!" << endl;
            policies.push_back("WallStreet");
            gainSupport();
            gainEnviro();
            loseDebt();
        }
        else {
            cout << "Your 'Make Wall Street Pay Again' policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
            loseEnviro();
        }
    }
    else if (ans5 == 2) {
        if (addPolicy() == true) {
            cout << "Your EPA Clean Up policy passed through Congress and was implemented!" << endl;
            policies.push_back("EPA");
            gainSupport();
            gainEnviro();
            gainDebt();
        }
        else {
            cout << "Your EPA Clean Up policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
            loseEnviro();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    
    int ans6;
    cout << "Your European allies are suddenly turning against you (1 or 2). " << endl;
    cout << "1) Visit their diplomats and attempt to regain good terms with them." << endl;
    cout << "2) Make new and more powerful allies." << endl;
    cin >> ans6;
    if (ans6 == 1) {
        if (addPolicy() == true) {
            cout << "Your European Diplomacy policy passed through Congress and was implemented!" << endl;
            policies.push_back("European");
            gainPCI();
            gainDebt();
            gainGPI();
        }
        else {
            cout << "Your European Diplomacy policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
            Riot();
        }
    }
    else if (ans6 == 2) {
        if (addPolicy() == true) {
            cout << "Your New Allies policy passed through Congress and was implemented!" << endl;
            policies.push_back("Allies");
            loseGPI();
            gainDebt();
            loseEnviro();
            Riot();
        }
        else {
            cout << "Your New Allies policy didn't pass through Congress and thus wasn't implemented." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else
        cout << "Invalid answer. " << endl;
    
    output();
    checkFail();
    
    int ans7;
    cout << "Kim Kardashian dies. What do you do (1 or 2)? " << endl;
    cout << "1) So what? Do nothing." << endl;
    cout << "2) Tweet your condolescences to the family." << endl;
    cin >> ans7;
    if (ans7 == 1) {
        if (addPolicy() == true) {
            cout << "Your decision to Do Nothing wasn't taken lightly by your constituents!" << endl;
            policies.push_back("Kim");
            loseSupport();
            loseGPI();
            losePCI();
            Riot();
        }
        else {
            cout << "Your constituents pressure you into making a Public Statement." << endl;
            gainDebt();
            loseGPI();
        }
    }
    else if (ans7 == 2) {
        if (addPolicy() == true) {
            cout << "Your Tweet to the Kardashians became the most retweeted thing on Twitter." << endl;
            policies.push_back("Tweet");
            gainSupport();
            gainGPI();
            gainPCI();
        }
        else {
            cout << "Your Tweet goes unnoticed." << endl;
            loseGPI();
        }
    }
    else
        cout << "Invalid answer." << endl;
    
    output();
    checkFail();
    success();
}






