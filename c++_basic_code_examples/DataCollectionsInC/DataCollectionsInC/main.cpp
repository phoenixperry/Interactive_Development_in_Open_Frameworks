//
//  main.cpp
//  DataCollectionsInC
//
//  Created by Phoenix Perry on 30/10/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;
#include <vector>

const int numOfItems = 5;

int scores[numOfItems]={11,12,13,54,13};

vector <int>highScores;

struct Person{
    string name;
    int age;
    string lastName;
};

vector<Person>people;

int main(int argc, const char * argv[]) {
    Person granny;
    granny.age = 90;
    Person mom;
    mom.name="Willma";
    people.push_back(granny);
    people.push_back(mom);
    

    cout<<granny.age << endl;
    
    scores[2] = 10;
    cout << scores[2] << endl;
    highScores.push_back(10);
    highScores.push_back(12);
    
    cout<< highScores.at(1) << endl;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
