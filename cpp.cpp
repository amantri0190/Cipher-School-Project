#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case

    if (n == 0)
        return 1;
    // int chotti = factorial(n - 1); 
    // int badi = n * chotti;
    cout<<endl;
    // int smallerPrblm = factorial(n - 1);
    // int bigerPrblm = n * smallerPrblm;
    // return bigerPrblm;

    // int smallerPrblm = factorial(n - 1);
    // return n * smallerPrblm;

    return  n * factorial(n-1);
}   
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}
