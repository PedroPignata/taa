// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     double A, B, C;
//     cin >> A >> B >> C;

//     double x = 0.0; 
//     double step = 0.0001; 
//     double precision = 0.0001;

//     while (fabs(A * x + B * sin(x) - C) > precision) {
//         x += step; 
//     }

//     cout << fixed << setprecision(4) << x << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double left = 0.0, right = 1e6; 
    double mid;

    while (right - left > 1e-7) {
        mid = (left + right) / 2;
        double f = A * mid + B * sin(mid);

        if (f < C)
            left = mid;
        else
            right = mid;
    }

    cout << fixed << setprecision(4) << (left + right) / 2 << endl;
    return 0;
}
