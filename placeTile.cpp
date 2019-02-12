// Given a “2 x n” board and tiles of size “2 x 1”, 
// count the number of ways to tile the given board using the 2 x 1 tiles. 
// A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile.

#include <iostream>

using namespace std;

int countWays(int n);

int main(int argc, char const *argv[])
{
    cout << countWays(3) << endl;
    return 0;
}

int countWays(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }

    int ans;
    int a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}