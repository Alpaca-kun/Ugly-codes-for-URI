#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double	n = 3.14159, 
						raio;
    
    cin >> raio;
    cout << "A=" << setprecision(4) << fixed << raio * raio * n <<endl; 

    return 0;
}
