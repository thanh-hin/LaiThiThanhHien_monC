#define INVENT_H
#define INVENT_H

#include <iostream>

using namespace std;

class Inventory{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
public:
    Inventory()
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    Inventory(int i, int q, double c){
        if(i < 0){
            cout << "Negative item number not accepted!\n";
            exit(EXIT_FAILURE);
        }

        if(q < 0){
            cout << "Negative quantities not accepted!\n";
            exit(EXIT_FAILURE);
        }

        if(c < 0){
            cout << "Negative costs not accepted!\n";
            exit(EXIT_FAILURE);
        }
        itemNumber = i;
        quantity = q;
        cost = c;
        setTotalCost();
    }

    void setItemNumber(int i){
        if(i < 0){
            cout << "Negative item number not accepted!\n";
            return;
        }
        else{
            itemNumber = i;
        }
    }

    void setQuantity(int q){
        if(q < 0){
            cout << "Negative quantities not accepted!\n";
            return;
        }
        else{
            quantity = q;
            setTotalCost();
        }
    }

    void setCost(double c){
        if(c < 0){
            cout << "Negative costs not accepted!\n";
            return;
        }
        else{
            cost = c;
            setTotalCost();
        }
    }
    void setTotalCost(){
        totalCost = quantity * cost;
    }

    int getItemNumber() const{
        return itemNumber;
    }

    int getQuantity() const{
        return quantity;
    }

    double getCost() const{
        return cost;
    }
    double getTotalCost() const{
        return totalCost;
    }
};
