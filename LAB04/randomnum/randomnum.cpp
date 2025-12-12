#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // สุ่มเลข
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempt = 0;

    cout << "=== เกมทายเลข 1 - 100 ===" << endl;

    // ลูปให้ผู้ใช้ทายจนกว่าจะถูก
    do {
        cout << "กรุณาใส่ตัวเลขที่คุณทาย: ";
        cin >> guess;

        attempt++;

        if (guess > secretNumber) {
            cout << "มากเกินไป! ลองใหม่\n";
        }
        else if (guess < secretNumber) {
            cout << "น้อยเกินไป! ลองใหม่\n";
        }
        else {
            cout << "ถูกต้อง! ตัวเลขคือ " << secretNumber << endl;
            cout << "คุณทายทั้งหมด " << attempt << " ครั้ง\n";
        }

    } while (guess != secretNumber);

    return 0;
}
