#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


// < Container Contain Classes > //


// < Player Values > //

class Player {
    public:
        double health = 100;
        double stamina = 100;
        double cash = 10;
        int walkspeed = 16;
};

// < Items Table > //

class itemstable {
    public:
        bool bow = false;
};

// < Melee Damage Values > //

class DamageValues {
    public:
        int bowdamage = 5;
};

// < Wait Functions > //
void wait2() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

void wait1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void wait5() {
    std::this_thread::sleep_for(std::chrono::seconds(5));
}


// < Clear > //

void clear() {
    system("cls");
    system("clear");
}

// < Poison Values Damages > //

// < Loading > //
void startgame() {
    cout << "Loading, Please wait [ ";
    
    for (int i = 0; i < 10; i++) {
        wait2();
        cout << "#";
    }
    cout << " ]\n";
    wait5();
    clear();
}