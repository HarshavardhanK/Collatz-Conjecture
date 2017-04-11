//
//  Collatz.cpp
//  Work
//
//  Created by Harshavardhan K K on 11/04/17.
//  Copyright © 2017 Harshavardhan K. All rights reserved.
//

#include <iostream>
using namespace std;

int steps = 0;

int collatz(long int num) {
    
    steps++;
    
    if(num == 1) {
        return 1;
        
    } else if(num % 2 == 0) {
        return collatz(num / 2);
        
    } else {
        return collatz(num * 3 + 1);
        
    }
    
}

int main(int argc, char** argv) {
    
    long int n = arc4random();
    cout << "Number: " << n << endl;
    
    int num = collatz(n);
    
    cout << steps << " steps required to reach " << num << endl;
    
    return 0;
    
}
