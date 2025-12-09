// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()

{
    int n1 = 0 ,n2 = 1;
    for (int i = 1; i <= 10; i++) {
        cout << i << " " << endl;
}   
    while (n1 < 10) {
        n1++; 
        cout << n1 << endl;
    }

    do {
        cout << n2 << endl;
        n2++;
    } while (n2 <= 10);

    return 0;
    }
    



    
    
