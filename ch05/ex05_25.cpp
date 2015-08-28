/*
  ex05_25.cpp
  
  Exercise 05.25

  Created by Wang Zhe on Sun Aug 23 13:27:01 2015
  Copyright (c) 2014 Wang Zhe. All rights reserved.
*/
#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl; using std::runtime_error;

int main(void)
{
    for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
    {
        try 
        {
            if (j == 0) 
                throw runtime_error("divisor is 0");
            cout << i / j << endl;
        }
        catch (runtime_error err) 
        {
            cout << err.what() << "\n";
        }
    }

    return 0;
}
