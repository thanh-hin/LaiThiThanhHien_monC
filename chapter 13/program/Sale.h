// Specification file for the Sale class.
#ifndef SALE_H
#define SALE_H

class Sale
{
private:
    double itemCost; // Cost of the item
    double taxRate;  // Tax rate

public:
    // Constructor to initialize itemCost and taxRate
    Sale(double cost, double rate = 0.05)
    {
        itemCost = cost;
        taxRate = rate;
    }

    // Getter function to retrieve the item cost
    double getItemCost() const
    {
        return itemCost;
    }

    // Getter function to retrieve the tax rate
    double getTaxRate() const
    {
        return taxRate;
    }

    // Calculate and return the tax amount
    double getTax() const
    {
        return (itemCost * taxRate);
    }

    // Calculate and return the total cost (item cost + tax)
    double getTotal() const
    {
        return (itemCost + getTax());
    }
};

#endif