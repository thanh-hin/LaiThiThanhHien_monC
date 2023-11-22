#ifndef MORTGAGE_H
#define MORTGAGE_H

#include <iostream>
#include <cmath>

using namespace std;

class Mortgage{
private:
    double loan;
    int years;
    double iRate;
    double getTerm() const{
        double term;
        term = pow((1 + iRate/12), (12*years));
        return term;
    }

public:
    Mortgage(){
        loan = 0;
        years = 0;
        iRate = 0;
    }

    void setLoan(){
        double l;
        cout << "Enter amount of loan in $: ";
        cin >> l;
        //validate input
        while(l < 0){
            cout << "Negative numbers for loans are not";
            cout << " accepted. Enter again: ";
            cin >> l;
        }
        loan = l;
    }

    void setInterestRate(){
        double r;
        cout << "Enter interest rate: ";
        cin >> r;
        iRate = r;
    }

    void setYears(){
        int y;
        cout << "Enter number of years: ";
        cin >> y;
        //validate input
        while(y < 1){
            cout << "Values less than 1 are not accepted";
            cout << " for years. Enter again: ";
            cin >> y;
        }
        years = y;
    }
    double getLoan() const{
        return loan;
    }

    int getYears() const{
        return years;
    }

    double getInterestRate() const{
        return iRate;
    }
    double getMonthlyPayment() const{
        double payment;
        payment = (loan * iRate * getTerm() / 12) / (getTerm() - 1);
        return payment;
    }

    double getTotalPaid() const{
        double total;
        total = 12 * years * getMonthlyPayment();
        return total;
    }
};

#endif
