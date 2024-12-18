for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "Enter the student's Registration number: ";
        cin >> regno[i];

        cout << "Enter the student's Name: ";
        cin.ignore();
        getline(cin, names[i]);

        cout << "Enter the number of Breakfasts taken: ";
        cin >> Breakfasts[i];

        cout << "Enter the number of Lunch/Dinners taken: ";
        cin >> DaysEaten[i];

        cout << "Enter any fines (if none, enter 0): ";
        cin >> fine[i];

        cout << "Enter unpaid amount from the last bill (arrears): ";
        cin >> arrears[i];

        cout << "Enter the student's GPA: ";
        cin >> GPA[i];

        cout << "Has the student paid? (yes/no): ";
        cin >> paymentStatus[i];

        if (fine[i] == 0) {
            noFinesCount++;
        }

        if (arrears[i] > 1000) {
            highArrearsCount++;
        }

        surcharge[i] = calculateSurcharge(arrears[i]);
        MessingCharges[i] = calculateMessingCharges(Breakfasts[i], DaysEaten[i]);

        float scholarshipDiscount = calculateScholarshipMess(arrears[i], GPA[i]);
        MessingCharges[i] *= scholarshipDiscount;

        gas[i] = MessingCharges[i] * 0.06;
        Other[i] = gas[i] + 650 + 25;
        total[i] = arrears[i] + surcharge[i] + MessingCharges[i] + fine[i] + Other[i];
    }
