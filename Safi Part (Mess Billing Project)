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
        surcharge[i] = calculateSurcharge(arrears[i]);
        MessingCharges[i] = calculateMessingCharges(Breakfasts[i], DaysEaten[i]);

        float scholarshipDiscount = calculateScholarshipMess(arrears[i], GPA[i]);
        MessingCharges[i] *= scholarshipDiscount;

        gas[i] = MessingCharges[i] * 0.06;
        Other[i] = gas[i] + 650 + 25;
        total[i] = arrears[i] + surcharge[i] + MessingCharges[i] + fine[i] + Other[i];
