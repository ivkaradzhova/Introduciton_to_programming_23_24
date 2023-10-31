#include <iostream>
#include <cmath>

bool isEqual(double a, double b) {
    const double eps = 1e-9;
    return abs(a - b) < eps;
}

double getDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool rightAngleAtPoint(int x1, int y1, int x2, int y2, int x3, int y3) {
    double side1 = getDistance(x1, y1, x2, y2);
    double side2 = getDistance(x2, y2, x3, y3);
    double side3 = getDistance(x1, y1, x3, y3);

    return isEqual(side1 * side1 + side2 * side2, side3 * side3); 
}

bool hasRightAngle(int x1, int y1, int x2, int y2, int x3, int y3) {
    return rightAngleAtPoint(x1, y1, x2, y2, x3, y3) ||
           rightAngleAtPoint(x1, y1, x3, y3, x2, y2) ||
           rightAngleAtPoint(x2, y2, x1, y1, x3, y3);
}

bool isRectangle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    return rightAngleAtPoint(x4, y4, x1, y1, x2, y2) &&
           rightAngleAtPoint(x4, y4, x3, y3, x2, y2);
}

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    // std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // std::cout << hasRightAngle(x1, y1, x2, y2, x3, y3) << std::endl;

    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    std::cout << isRectangle(x1, y1, x2, y2, x3, y3, x4, y4) << std::endl;

    return 0;
}