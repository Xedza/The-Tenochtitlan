#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "holder.h"
#include <SDL2/SDL.h>
#include <cstdlib>

using namespace std;

int main() {
    startgame();
    wait1();
    cout << "====================================\n";
    cout << "|        The Tenochtitlans         |\n";
    cout << "[       Version 'BAREBONES'        ]\n";
    cout << "[----------------------------------]";
    cout << "\n";
    cout << "\n";
    cout << "Console Version of the game, please be weary this is not yet a 2d setup of the game.\n";
    cout << "\n";
    cout << "< [ Options ] >\n";
    cout << "\n";
    cout << "1. [ < Play > ]\n";
    cout << "2. [ < Settings > ]\n";
    cout << "3. [ Developer Commands ]\n";
    cout << "4. [ Debugging Terminal ]\n";
}