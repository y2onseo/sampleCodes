#include <iostream>

bool condition_1(int x, int y) {
    return x > 0 && y > 0;
}

bool condition_2(int x, int y) {
    return x < 10 && y < 10;
}

bool condition_3(int x, int y) {
    return (x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0);
}

bool decision(int x, int y) {
    return condition_1(x, y) && condition_2(x, y) || condition_3(x, y);
}

int main() {
    int input1, input2;
    std::cout << "Enter two integers: ";
    std::cin >> input1 >> input2;

    if (decision(input1, input2)) {
        std::cout << "Decision is true.\n";
    }
    else {
        std::cout << "Decision is false.\n";
    }

    return 0;
}
