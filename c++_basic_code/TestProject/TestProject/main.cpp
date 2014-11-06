//
//  main.cpp
//  TestProject
//
//  Created by Phoenix Perry on 29/10/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;

int x;
int y;
double z;
string name;
char a;
const int q = 5;

int myFunction(int x3);

void timesFive(int x3);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::cout << "Hello, World!\n";
    
    y = myFunction(8);
    y = y + 1;
    
    cout<< y << endl;
 
    y = myFunction(11);
    
    cout<< y << endl;
    timesFive(3);
    return 0;
}

void timesFive(int x3)
{
    x3 = x3*5;
    cout<< x3 << "\nIs the value of x3 ONLY inside of timesFive. after timesFive is done running x3 is deleted from memory b/c it's in the memory heap!" << endl;
}

int myFunction(int x3)
{
    x3 = x3+5;
    cout << "I ran!" << endl;
    return x3;
}
