#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    
    cin >> A >> B >> C;
    cout << "MEDIA = " << setprecision(1) << fixed << ((A * 2) + (B * 3) + (C * 5)) / 10 << endl;

    return 0;
}
