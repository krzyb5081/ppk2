#include <iostream>
#include <math.h>

int main()
{

    double AX, AY, Ax, Ay, Ai, Aj, vel;
    std::cout << "x: " << std::endl;
    std::cin >> Ax;
    std::cout << "y: " << std::endl;
    std::cin >> Ay;
    std::cout << "i: " << std::endl;
    std::cin >> Ai;
    std::cout << "j: " << std::endl;
    std::cin >> Aj;

    AX = Ax;
    AY = Ay;

    if (Ai < 0) {
        if (Ax + Ai <= AX) {
            AX = Ax + Ai;
        }
    }
    else {
        if (Ax + Ai >= AX) {
            AX = Ax + Ai;
        }
    }

    if (Aj < 0) {
        if (Ay + Aj <= AY) {
            AY = Ay + Aj;
        }
    }
    else {
        if (Ay + Aj >= AY) {
            AY = Ay + Aj;
        }
    }

    std::cout << "x: " << AX << "y: " << AY << std::endl;
    
}