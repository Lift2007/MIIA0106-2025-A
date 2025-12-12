#include <iostream>
#include <cmath> 

using namespace std;


bool isPrime(int n) {
   
    if (n <= 1) {
        return false;
    }

  
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num;
    cout << "ป้อนตัวเลขที่ต้องการตรวจสอบ: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " เป็นจำนวนเฉพาะ " << endl;
    }
    else {
        cout << num << " ไม่ใช่จำนวนเฉพาะ" << endl;
    }

    return 0;
}