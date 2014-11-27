//
//  main.cpp
//  CPlusBasics
//
//  Created by Phoenix Perry on 28/10/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;
void myFunction(int &x_);
void myFunction(int x, int y);
//int scores[3];
const int arrayIndex = 10;
int scores[arrayIndex];

int main(int argc, const char * argv[]) {
    
    // insert code here...
    std::cout << "Hello, World!\n";
    scores[0] = 10;
    
    
    int x = 10;

    myFunction(x, 10);
    
    cout << x << " x is still the same" << endl;
    
    int &xref = x;
    myFunction(xref);
    cout << xref << " x is still the same" << endl;
    return 0;
}

//a simple function
//note that a just passing in a reference isn't enough info for c++ to know it's overloaded
void myFunction(int x_, int y_)
{
    x_ = x_+ 5;
    cout << x_ << " is the value of x_" << endl;
}

void myFunction(int &x_)
{
    x_ = x_+ 5;
    cout << x_ << " is the value of x_" << endl;
}