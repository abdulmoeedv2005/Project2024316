 do {
        cout << "Enter the number of students (max 10): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 10) {
            cout << "Invalid number of students! Please enter between 1 and 10.\n";
        }
    } while (numStudents < 1 || numStudents > 10);


cout << "\n\nMess Bill Summary:\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
        cout << "Registration Number: " << regno[i] << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Arrears (Previous unpaid amount): " << arrears[i] << endl;
        cout << "Surcharge (2% on arrears): " << surcharge[i] << endl;
        cout << "Fine: " << fine[i] << endl;
        cout << "Breakfast Charges (" << Breakfasts[i] << "): " << Breakfasts[i] * 180 << endl;
        cout << "Lunch/Dinner Charges (" << DaysEaten[i] << "): " << DaysEaten[i] * 486.55 << endl;
        cout << "Current Messing Charges (after Scholarship): " << MessingCharges[i] << endl;
        cout << "Gas Charges: " << gas[i] << endl;
        cout << "LAN & Internet Charges: 650" << endl;
        cout << "Project Topi Charges: 25" << endl;
        cout << "Miscellaneous Charges: " << Other[i] << endl;
        cout << "Grand Total (Including arrears): " << total[i] << endl;

        if (arrears[i] > 1000) {
            cout << "Warning: This student has high arrears.\n";
        }

        if (paymentStatus[i] == "no") {
            cout << "Payment Status: Payment Pending\n";
        } else {
            cout << "Payment Status: Payment Received\n";
        }

        cout << "---------------------------------\n";

        grandTotal += total[i];
    }
