// Find fibbonnaci value of nth position.

#include <iostream>
#include <vector>

using namespace std;

int fibbonacci (int num);

int main(int argc, char const *argv[])
{
    cout << fibbonacci(8) << endl;
    return 0;
}

int fibbonacci (int num) {
    vector<int> fac(num + 2);
    
    fac[0] = 0;
    fac[1] = 1;

    for (int i = 2; i < num; i++) {
        fac[i] = fac[i - 2] + fac[i - 1];
    }
    return fac[num - 1];
}