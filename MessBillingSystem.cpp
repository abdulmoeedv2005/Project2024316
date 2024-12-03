#include<iostream>
using namespace std;

int main(){
    int DaysEaten,Breakfasts,fine,regno;
    float arrears,TBreakfasts,TDaysEaten,MessingCharges,Other,total,surcharge,gas;
    char choice;

    while(true){
    cout<<"Do you want to calculate the Mess Bill (Y/n): ";
    cin>>choice;
    if(choice=='n'){
        cout<<"Program Ended!"<<endl;
        break;
    }
    else{
        cout<<"Enter the students Registration number: ";
        cin>>regno;
        cout<<"Enter the number of Breakfasts taken: ";
        cin>>Breakfasts;
        cout<<"Enter the number of Lunch/Dinners taken: ";
        cin>>DaysEaten;
        cout<<"Enter any fines: ";
        cin>>fine;
        cout<<"Enter any unpaid amount from the last bill: ";
        cin>>arrears;
        TBreakfasts=Breakfasts*180;
        TDaysEaten=DaysEaten*486.55;
        surcharge=arrears*0.02;
        MessingCharges=TBreakfasts+TDaysEaten;
        gas=MessingCharges*0.06;
        Other=gas+650+25;
        total=arrears+surcharge+MessingCharges+fine+Other;
        cout<<" "<<endl<<endl;
        cout<<regno<<endl;
        cout<<"Fine "<<fine<<endl;
        cout<<"Arrears "<<arrears<<endl;
        cout<<"Surcharge 2% "<<surcharge<<endl;
        cout<<"Breakfast "<<Breakfasts<<" "<<TBreakfasts<<endl;
        cout<<"Lunch/Dinner "<<DaysEaten<<" "<<TDaysEaten<<endl;
        cout<<"Current Messing Charges  "<<MessingCharges<<endl<<endl;
        cout<<"Gas "<<gas<<endl;
        cout<<"LAN & Internet Charges 650"<<endl;
        cout<<"Project Topi 25"<<endl;
        cout<<"Miscellaneous Charges "<<Other<<endl<<endl;
        cout<<"Grand Total "<<total<<endl;
    }   
    }
    return 0;

}