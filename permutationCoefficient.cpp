// Find permutation coefficient of P(n, k)

#include <iostream>
#include <vector>

using namespace std;

int findPerm(int n, int k);

int main(int argc, char const *argv[])
{
    cout << findPerm(10, 3) << endl;
    return 0;
}

int findPerm(int n, int k) {
    int coeff = 1;

    for (int i = n; i > (n - k); --i) {
        coeff *= i;
    }
    return coeff;
}