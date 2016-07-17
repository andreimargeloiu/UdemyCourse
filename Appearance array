// we have used numbers from [-10, 10]
// if you don't know the interval of the input numbers, find the minimum number in the input
// and add it to all numbers (instead of 10 used in this source)


# include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100], n, i;
int main ()
{
    f>>n;
    for (i=1; i<=n; ++i) {
        int x;
        f>>x;
        x=x+10;
        ++A[x];
    }
    if (A[3] > 0) g<<"YES, it appears";
             else g<<"NO, it's not";

    return 0;
}
