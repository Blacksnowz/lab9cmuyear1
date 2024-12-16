#include <iostream>
#include <iomanip> // สำหรับใช้ setw(), setprecision(), ...
using namespace std;

int main() {
    double loan, interestRate, annualPayment;

    // รับข้อมูลจากผู้ใช้
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> interestRate;
    cout << "Enter amount you can pay per year: ";
    cin >> annualPayment;

    // แสดงส่วนหัวของตาราง
    cout << setw(13) << left << "EndOfYear#";
    cout << setw(13) << left << "PrevBalance";
    cout << setw(13) << left << "Interest";
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    cout << fixed << setprecision(2); // ตั้งค่าจำนวนทศนิยมที่แสดงผล

    int year = 1;
    double prevBalance = loan;

    // ใช้ลูปในการคำนวณและแสดงผลจนยอดหนี้เป็น 0
    while (prevBalance > 0) {
        double interest = prevBalance * (interestRate / 100.0); // คำนวณดอกเบี้ย
        double total = prevBalance + interest;                 // คำนวณยอดรวม
        double payment = (total < annualPayment) ? total : annualPayment; // ยอดชำระในปีนั้น
        double newBalance = total - payment;                   // คำนวณยอดหนี้ใหม่

        // แสดงผลของปีปัจจุบัน
        cout << setw(13) << left << year;
        cout << setw(13) << left << prevBalance;
        cout << setw(13) << left << interest;
        cout << setw(13) << left << total;
        cout << setw(13) << left << payment;
        cout << setw(13) << left << newBalance;
        cout << "\n";

        // เตรียมข้อมูลสำหรับปีถัดไป
        prevBalance = newBalance;
        year++;
    }

    return 0;
}
