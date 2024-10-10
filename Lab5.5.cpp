#include <cmath>
#include <iostream>
using namespace std;

int geometricTerm(int b1, int q, int n, int level, int& maxDepth) {
    if (level > maxDepth) {
        maxDepth = level;
    }

    if (n == 1) {
        return b1;
    }

    cout << "level = " << level << endl;
    return q * geometricTerm(b1, q, n - 1, level + 1, maxDepth);
}

int geometricSum(int b1, int q, int n, int level, int& maxDepth) {
    if (level > maxDepth) {
        maxDepth = level;
    }

    if (n == 1) {
        return b1;
    }

    cout << "level = " << level << endl;
    return geometricTerm(b1, q, n, level + 1, maxDepth) + geometricSum(b1, q, n - 1, level + 1, maxDepth);
}

int main() {
    int b1, q, n;
    cout << "b1: "; cin >> b1;
    cout << "q: "; cin >> q;
    cout << "n: "; cin >> n;

    int maxDepthTerm = 0;
    int maxDepthSum = 0;

    int nthTerm = geometricTerm(b1, q, n, 1, maxDepthTerm);
    cout << "The " << n << "-th term of the geometric progression: " << nthTerm << endl;
    cout << "Maximum recursion depth for finding the " << n << "-th term: " << maxDepthTerm << endl;

    int sum = geometricSum(b1, q, n, 1, maxDepthSum);
    cout << "The sum of the first " << n << " terms of the progression: " << sum << endl;
    cout << "Maximum recursion depth for sum: " << maxDepthSum << endl;

    return 0;
}
