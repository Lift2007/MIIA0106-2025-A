#include<iostream>
#include<string>
using namespace std;

void processNumber(int num, int& minValue, int& count) {
    if (count == 0) {
        minValue = num;
    }
    else {
        if (num < minValue) {
            minValue = num;
        }
    }
    count++;
}
    int main(){
        int num = 0;
        int minValue=0 ;
        int count = 0; 

        for (;;) {  
            cout << " num: ";
            cin >> num;

            if (num == 0) {
                break;   
            }
            processNumber(num, minValue, count);
        }
        cout << "numbers: " << count << endl;
        cout << "Min : " << minValue << endl;
    }



