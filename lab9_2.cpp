#include<iostream>
using namespace std;

//Write the function printO() here
#include <iostream>
using namespace std;

// Function สำหรับพิมพ์ตัว 'O' ตามที่กำหนด
void printO(int N, int M) {
    // ตรวจสอบว่าค่า Input ถูกต้องหรือไม่
    if (N <= 0 || M <= 0) {
        cout << "Invalid input" << endl;
        return;
    }

    // ใช้ for loop 2 ชั้นในการพิมพ์ 'O'
    for (int i = 0; i < N; i++) { // Loop สำหรับจำนวนบรรทัด (N)
        for (int j = 0; j < M; j++) { // Loop สำหรับจำนวน 'O' ในแต่ละบรรทัด (M)
            cout << "O";
        }
        cout << endl; // ขึ้นบรรทัดใหม่หลังจากพิมพ์ครบ M ตัว
    }
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
