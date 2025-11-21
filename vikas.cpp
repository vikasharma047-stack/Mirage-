// #include <iostream>
// using namespace std;

// int main() {
//     float a, b;
//     char op;

//     cout << "Enter first number: ";
//     cin >> a;

//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> b;

//     switch(op) {
//         case '+': cout << "Result = " << a + b; break;
//         case '-': cout << "Result = " << a - b; break;
//         case '*': cout << "Result = " << a * b; break;
//         case '/': cout << "Result = " << a / b; break;
//         default: cout << "Invalid operator!";
//     }

//     return 0;
// }






#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  
    int secret = rand() % 10 + 1; // 1-100 random number
    int guess;

    cout << "Guess the number (1 to 10): ";

    do {
        cin >> guess;

        if (guess > secret) {
            cout << "Too high! Try again: ";
        }
        else if (guess < secret) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Congratulations! You guessed the number.";
        }

    } while (guess != secret);

    return 0;
}






// #include <iostream>
// using namespace std;

// int main() {
//     float m1, m2, m3, avg;

//     cout << "Enter marks of three subjects: ";
//     cin >> m1 >> m2 >> m3;

//     avg = (m1 + m2 + m3) / 3;

//     cout << "Average = " << avg << endl;

//     if (avg >= 90)
//         cout << "Grade: A+";
//     else if (avg >= 80)
//         cout << "Grade: A";
//     else if (avg >= 70)
//         cout << "Grade: B";
//     else if (avg >= 60)
//         cout << "Grade: C";
//     else if (avg >= 50)
//         cout << "Grade: D";
//     else
//         cout << "Grade: F";

//     return 0;
// }








// #include <iostream>
// using namespace std;

// int main() {
//     int balance = 5000;
//     int choice, amount;

//     while (true) {
//         cout << "\n------ ATM MENU ------\n";
//         cout << "1. Check Balance\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Current Balance: ₹" << balance << endl;
//             break;

//         case 2:
//             cout << "Enter amount to deposit: ";
//             cin >> amount;
//             balance += amount;
//             cout << "Amount Deposited. New Balance: ₹" << balance << endl;
//             break;

//         case 3:
//             cout << "Enter amount to withdraw: ";
//             cin >> amount;

//             if (amount > balance) {
//                 cout << "Insufficient Balance!" << endl;
//             } else {
//                 balance -= amount;
//                 cout << "Amount Withdrawn. Remaining Balance: ₹" << balance << endl;
//             }
//             break;

//         case 4:
//             cout << "Thank you for using ATM!" << endl;
//             return 0;

//         default:
//             cout << "Invalid Choice! Try again." << endl;
//         }
//     }
// }