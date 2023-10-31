#include <iostream>
#include <iomanip>

bool areEqual(double a, double b) {
    const double eps = 1e-14;
    return abs(a - b) < eps;
}

double getDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool hasRightAngle(int x1, int y1, int x2, int y2, int x3, int y3) {
    double side1 = getDistance(x1, y1, x2, y2);
    double side2 = getDistance(x2, y2, x3, y3);
    double side3 = getDistance(x1, y1, x3, y3);
    
    return areEqual(sqrt(side1 * side1 + side2 * side2), side3);
}

bool isRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    return hasRightAngle(x1, y1, x2, y2, x3, y3) && 
           hasRightAngle(x1, y1, x4, y4, x3, y3) &&
           hasRightAngle(x2, y2, x3, y3, x4, y4) &&
           hasRightAngle(x2, y2, x1, y1, x4, y4);
}

bool isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    return isRectangle(x1, y1, x2, y2, x3, y3, x4, y4) &&
           getDistance(x1, y1, x2, y2) == getDistance(x2, y2, x3, y3);

}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    // std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // std::cout << hasRightAngle(x1, y1, x2, y2, x3, y3) << std::endl;
    
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    std::cout << hasRightAngle(x1, y1, x2, y2, x3, y3) << std::endl;
    std::cout << isRectangle(x1, y1, x2, y2, x3, y3, x4, y4) << std::endl;
    return 0;
}
