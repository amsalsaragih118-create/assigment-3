#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "include/point2d.hpp"
#include "include/triangle.hpp"

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah segitiga: ";
    cin >> n;

    vector<Triangle> triangles;

    // Input data segitiga
    for (int i = 0; i < n; i++) {
        float x, y, z;

        cout << "Titik 1 (x y z): ";
        cin >> x >> y >> z;
        Point2D t1(x, y, z);

        cout << "Titik 2 (x y z): ";
        cin >> x >> y >> z;
        Point2D t2(x, y, z);

        cout << "Titik 3 (x y z): ";
        cin >> x >> y >> z;
        Point2D t3(x, y, z);

        triangles.push_back(Triangle(t1, t2, t3));
    }

    // Cek jenis segitiga
    for (size_t i = 0; i < triangles.size(); i++) {
        triangles[i].TriangleType();
    }

    return 0;
}