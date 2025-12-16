#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    if (a >= b && a >= c) {
        return a;  
    }
    else if (b >= a && b >= c) {
        return b;  
    }
    else {
        return c; 
    }
}
int main()
{
    int a, b, c;

    
    cout << " เลข3เลข ";
    cin >> a >> b >> c;
    int maxValue = maxOfThree(a, b, c); 
    cout << " เลขที่เยอะที่สุดคือ " << maxValue << endl;

    return 0;
}
