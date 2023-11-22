#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    double balance;
    double interestRate;
    double interest;
    int transactions;

public:
    Account(double iRate = 0.045, double bal = 0)
    {
        balance = bal;
        interestRate = iRate;
        interest = 0;
        transactions = 0;
    }

    void setInterestRate(double iRate)
    {
        interestRate = iRate;
    }

    void makeDeposit(double amount)
    {
        balance += amount;
        transactions++;
    }

    void withdraw(double amount);

    void calcInterest()
    {
        interest = balance * interestRate;
        balance += interest;
    }

    double getInterestRate() const
    {
        return interestRate;
    }

    double getBalance() const
    {
        return balance;
    }

    double getInterest() const
    {
        return interest;
    }

    int getTransactions() const
    {
        return transactions;
    }
};

#endif