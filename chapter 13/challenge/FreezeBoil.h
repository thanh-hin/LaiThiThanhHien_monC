
#ifndef FREEZEBOIL_H
#define FREEZEBOIL_H

#include <iostream>
#include <string>

using namespace std;

class FreezeBoil{
private:
    int temperature;

public:
    FreezeBoil(){
        temperature = 72;
    }
    int getTemperature() const{
        return temperature;
    }
    void setTemperature(int t){
        temperature = t;
    }
    void display(){
        if(isEthylBoiling())
            cout << "Ethyl will boil.\n";
        if(isEthylFreezing())
            cout << "Ethyl will freeze.\n";
        if(isOxygenBoiling())
            cout << "Oxygen will boil.\n";
        if(isOxygenFreezing())
            cout << "Oxygen will freeze.\n";
        if(isWaterBoiling())
            cout << "Water will boil.\n";
        if(isWaterFreezing())
            cout << "Water will freeze.\n";
    }
    bool isEthylFreezing() const{
        if(temperature <= -173)
            return true;
        return false;
    }

    bool isEthylBoiling() const{
        if(temperature >= 172)
            return true;
        return false;
    }

    bool isOxygenFreezing() const{
        if(temperature <= -362)
            return true;
        return false;
    }

    bool isOxygenBoiling() const{
        if(temperature >= -306)
            return true;
        return false;
    }

    bool isWaterFreezing() const{
        if(temperature <= 32)
            return true;
        return false;
    }

    bool isWaterBoiling() const{
        if(temperature >= 212)
            return true;
        return false;
    }
};

#endif
