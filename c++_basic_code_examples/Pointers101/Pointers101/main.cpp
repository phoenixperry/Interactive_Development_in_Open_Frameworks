//
//  main.cpp
//  Pointers101
//
//  Created by Phoenix Perry on 06/11/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
using namespace std;
void secondFunction(int &address);
void secondFunction(int x, int y);

int main(int argc, const char * argv[]) {
    //on the heap!
    int x=0;
    

    secondFunction(x, 0);
    cout << x << "is the value of x " << endl;
  
    
    int &rx =x;
    
    int *ptr = 0;
    
    int y = 10;
    ptr = &x;

    cout << *ptr << endl;
    ptr = &y;
    rx = y;
    y = 20;
    cout << x << " after it got assigned to y" << endl;
    cout << y << " is still y " << endl;
    
    cout << &rx << endl;
    
    secondFunction(*ptr);
    cout << x << endl;
    
    return 0;
}
void secondFunction (int x, int y)
{
        x = 10;
    
}
void secondFunction (int &address)
{
    cout << address << endl;
    address ++;
}