#include <iostream>
using namespace std;

/*
    NOTE:
    This file contains 10 basic C++ beginner-level programs.
    To run any program, just uncomment its main() function
    and comment out others (since only one main() can exist at a time).
*/

/* -------------------- 1. Hello World Program -------------------- */
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

/* -------------------- 2. Addition of Two Numbers -------------------- */
// int main() {
//     int a, b, sum;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     sum = a + b;
//     cout << "Sum = " << sum << endl;
//     return 0;
// }

/* -------------------- 3. Find Even or Odd -------------------- */
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num % 2 == 0)
//         cout << num << " is Even" << endl;
//     else
//         cout << num << " is Odd" << endl;
//     return 0;
// }

/* -------------------- 4. Find Largest of Two Numbers -------------------- */
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     if (a > b)
//         cout << a << " is larger." << endl;
//     else if (b > a)
//         cout << b << " is larger." << endl;
//     else
//         cout << "Both are equal." << endl;
//     return 0;
// }

/* -------------------- 5. Print Multiplication Table -------------------- */
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= 10; i++) {
//         cout << n << " x " << i << " = " << n * i << endl;
//     }
//     return 0;
// }

/* -------------------- 6. Calculate Factorial -------------------- */
// int main() {
//     int n, fact = 1;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     cout << "Factorial of " << n << " = " << fact << endl;
//     return 0;
// }

/* -------------------- 7. Reverse a Number -------------------- */
// int main() {
//     int n, rev = 0, digit;
//     cout << "Enter a number: ";
//     cin >> n;
//     while (n > 0) {
//         digit = n % 10;
//         rev = rev * 10 + digit;
//         n /= 10;
//     }
//     cout << "Reversed number = " << rev << endl;
//     return 0;
// }

/* -------------------- 8. Check Prime Number -------------------- */
// int main() {
//     int n, flag = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n <= 1) {
//         cout << "Not Prime" << endl;
//         return 0;
//     }
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         cout << n << " is Prime" << endl;
//     else
//         cout << n << " is Not Prime" << endl;
//     return 0;
// }

/* -------------------- 9. Sum of Digits -------------------- */
// int main() {
//     int n, sum = 0, digit;
//     cout << "Enter a number: ";
//     cin >> n;
//     while (n > 0) {
//         digit = n % 10;
//         sum += digit;
//         n /= 10;
//     }
//     cout << "Sum of digits = " << sum << endl;
//     return 0;
// }

/* -------------------- 10. Simple Calculator -------------------- */
// int main() {
//     char op;
//     int a, b;
//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     switch (op) {
//         case '+': cout << "Result = " << a + b << endl; break;
//         case '-': cout << "Result = " << a - b << endl; break;
//         case '*': cout << "Result = " << a * b << endl; break;
//         case '/':
//             if (b != 0)
//                 cout << "Result = " << (float)a / b << endl;
//             else
//                 cout << "Division by zero error!" << endl;
//             break;
//         default: cout << "Invalid operator" << endl;
//     }
//     return 0;
// }
