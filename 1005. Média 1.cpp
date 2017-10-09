#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B;
    
    cin >> A >> B;
    cout << "MEDIA = " << setprecision(5) << fixed << ((A * 3.5) + (B * 7.5)) / 11 << endl;
    
    return 0;
}
