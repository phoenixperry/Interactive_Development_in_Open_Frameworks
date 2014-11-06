//
//  main.cpp
//  CircleNames
//
//  Created by Phoenix Perry on 05/11/14.
//  Copyright (c) 2014 Phoenix Perry. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct Circle
{
    int x;
    int y;
    int w;
    int h;
    string name;
};
const int numCircles = 3;
vector <string> names;
vector<Circle> circles;

int main(int argc, const char * argv[]) {
    names.push_back("player");
    names.push_back("enemy");
    names.push_back("peanut");
    for (int i=0; i<numCircles; i++) {
        Circle c;
        circles.push_back(c);
    }
    for (int i=0; i<numCircles; i++) {
        circles.at(i).name = names[i];
        cout<< circles.at(i).name <<endl;
    }
    
    
    return 0;
    
}
