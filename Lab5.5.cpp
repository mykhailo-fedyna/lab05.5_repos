#include <iostream>
#include <cmath>
using namespace std;
int geometricTerm(int b1, int q, int n, int& depth) {
    depth++;
    if (n == 1) {
        return b1;
    }
    return q * geometricTerm(b1, q, n - 1, depth);
}
int geometricSum(int b1, int q, int n, int& depth) {
    depth++;
    if (n == 1) {
        return b1;
    }
    return geometricTerm(b1, q, n, depth) + geometricSum(b1, q, n - 1, depth);
}
int main() {
    int b1, q, n;
    cout << "b1: ";
    cin >> b1;
    cout << "q: ";
    cin >> q;
    cout << "n: ";
    cin >> n;
    int depthTerm = 0;
    int depthSum = 0;
    int nthTerm = geometricTerm(b1, q, n, depthTerm);
    cout << "The " << n << "-th term of the geometric progression: " << nthTerm << endl;
    cout << "Recursion depth for finding the " << n << "-th term: " << depthTerm << endl;
    int sum = geometricSum(b1, q, n, depthSum);
    cout << "The sum of the first " << n << " terms of the progression: " << sum << endl;
    cout << "Recursion depth for sum: " << depthSum << endl;
    return 0;
}
