#include <iostream>
using namespace std;

int main() {
    char position;
    char choice;

    do {
        // รับค่าตำแหน่งของวัตถุ
        cout << "Enter the position of the object (A, B, C, or N for no object): ";
        cin >> position;

        // ตรวจสอบตำแหน่งและแสดงการกระทำของแขนหุ่นยนต์
        switch (position) {
        case 'A':
        case 'a':
            cout << "Moving arm to the left." << endl;
            break;
        case 'B':
        case 'b':
            cout << "Moving arm to the right." << endl;
            break;
        case 'C':
        case 'c':
            cout << "Moving arm down to pick up the object." << endl;
            break;
        case 'N':
        case 'n':
            cout << "Returning arm to the starting position." << endl;
            break;
        default:
            cout << "Invalid position entered!" << endl;
        }

        // ถามผู้ใช้ว่าต้องการทำงานต่อไหม
        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');  // ทำงานต่อเมื่อผู้ใช้เลือก Y

    cout << "Exiting the program..." << endl;

    return 0;
}
