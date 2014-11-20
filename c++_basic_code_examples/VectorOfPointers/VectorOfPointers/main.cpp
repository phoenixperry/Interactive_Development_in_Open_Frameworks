//
//  main.cpp
//  VectorOfPointers
//
//  Created by Phoenix Perry on 06/11/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

//vectors get made on the heap
//arrays get made on the stack

string *ptrToElement(vector<string>* const pVect, int i);

int main(int argc, const char * argv[]) {
    
    vector <string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    
      //assigning one pointer to another
    cout << "assigning one pointer to another"<< endl;
    //note this is not deferenced 
    string *pStr = ptrToElement(&inventory, 1);
    
    
    
    return 0;
}
string *ptrToElement(vector<string>* const pVect, int i)
{
    return &((*pVect)[i]);

}