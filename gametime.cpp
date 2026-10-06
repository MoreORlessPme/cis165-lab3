#include <iostream>
using namespace std;


int main() {
    int level1 = 78, level2 = 144;
    int h1 = level1 / 60, m1 = level1 % 60;
    int h2 = level2 / 60, m2 = level2 % 60;
    int diff = level2 - level1;
    int dh = diff / 60, dm = diff % 60;


    cout << "Level 1: " << h1 << " hr " << m1 << " min\n";
    cout << "Level 2: " << h2 << " hr " << m2 << " min\n";
    cout << "Difference: " << dh << " hr " << dm << " min\n";
    return 0;
}