// Project
// Mess Billing System

#include <iostream>
#include <string>
using namespace std;

float calculateSurcharge(float arrears) {
    if (arrears > 0) {
        return arrears * 0.02;
    }
    return 0;
}

float calculateMessingCharges(int breakfasts, int daysEaten) {
    float breakfastCost = breakfasts * 180;
    float lunchDinnerCost = daysEaten * 486.55;
    return breakfastCost + lunchDinnerCost;
}

float calculateScholarshipMess(float arrears, float GPA) {
    if (arrears < 500 && GPA >= 3.5) {
        return 0.8;
    }
    return 1;
}

int main() {
    int regno[10], DaysEaten[10], Breakfasts[10], fine[10];
    float arrears[10], surcharge[10], GPA[10];
    float MessingCharges[10], Other[10], total[10], gas[10];
    string names[10], paymentStatus[10];
    int numStudents;
    int noFinesCount = 0;
    int highArrearsCount = 0;

    do {
        cout << "Enter the number of students (max 10): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 10) {
            cout << "Invalid number of students! Please enter between 1 and 10.\n";
        }
    } while (numStudents < 1 || numStudents > 10);

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

    float grandTotal = 0;
    float averageTotal = 0;

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

    averageTotal = grandTotal / numStudents;

    cout << "\nOverall Summary:\n";
    cout << "Total charges for all students: " << grandTotal << endl;
    cout << "Average charges per student: " << averageTotal << endl;
    cout << "Total students with no fines: " << noFinesCount << endl;
    cout << "Total students with high arrears: " << highArrearsCount << endl;

    cout << "\nProgram Ended!" << endl;

    return 0;
}
