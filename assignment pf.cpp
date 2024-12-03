
//      Task1
    
    
//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice;
//    double totalBill = 0;
//
//    do {
//        // Display the menu
//        cout << "\nCafeteria Menu:\n";
//        cout << "1. Tea - $2\n";
//        cout << "2. Coffee - $3\n";
//        cout << "3. Sandwich - $5\n";
//        cout << "4. Burger - $7\n";
//        cout << "5. Exit\n";
//        cout << "Enter your choice (1-5): ";
//        cin >> choice;
//
//    
//        switch (choice) {
//            case 1:
//                totalBill += 2; 
//                cout << "You selected Tea. $2 added to your bill.\n";
//                break;
//            case 2:
//                totalBill += 3; 
//                cout << "You selected Coffee. $3 added to your bill.\n";
//                break;
//            case 3:
//                totalBill += 5; 
//                cout << "You selected Sandwich. $5 added to your bill.\n";
//                break;
//            case 4:
//                totalBill += 7; 
//                cout << "You selected Burger. $7 added to your bill.\n";
//                break;
//            case 5:
//                cout << "Exiting the menu...\n";
//                break; 
//            default:
//                cout << "Invalid choice. Please select a valid option (1-5).\n";
//                break;
//        }
//    } while (choice != 5); 
//
//    
//    cout << "\nYour total bill is: $" << totalBill << "\n";
//    cout << "Thank you for visiting the cafeteria!\n";
//
//    return 0;
//}



//          Task2


#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    do {
        // Display the ATM menu
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: // Check Balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2: 
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance. Transaction failed.\n";
                } else if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance -= amount;
                    cout << "You have withdrawn $" << amount << ".\n";
                    cout << "Your new balance is: $" << balance << endl;
                }
                break;

            case 3: 
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance += amount;
                    cout << "You have deposited $" << amount << ".\n";
                    cout << "Your new balance is: $" << balance << endl;
                }
                break;

            case 4: 
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default: 
                cout << "Invalid choice. Please select a valid option (1-4).\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

