#include <iostream>
using namespace std;

int getFactorial(int n)
{
    // Base case
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int recursionAns = getFactorial(n - 1); // recursive call
    int finalAns = n * recursionAns;        // processing part

    return finalAns;
}

// PrintCounting from n to 1
// PrintCounting from 5 to 1
// void printCounting(int n)
// {
//     // Base Case
//     if (n == 0)
//     {
//         return;
//     }
//     // Processing
//     cout << n << " ";
//     // Recursive Call
//     printCounting(n - 1); // if the recursive call is at the bottom we call it has "Tail Recursion"
// }

// PrintCounting from 1 to n
// PrintCounting from 1 to 5
void printCounting(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Recursive Call
    printCounting(n - 1); // if the recursive call is at the top we call it has "Head Recursion"

    // Processing
    cout << n << " ";
}

int pow(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }

    // Recursive Call
    //  pow(n) = 2 * pow(n - 1)
    int recursionAns = pow(n - 1);

    int finalAns = 2 * recursionAns;
    return finalAns; // Processing
}
int main()
{
    // GetFactorial
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int ans = getFactorial(n);
    // cout << "Factorial of : " << n << " is " << ans << endl;

    // ProntCounting
    printCounting(5);

    cout << "<----------------------------------------------------------->" << endl;
    // PowerCountig
    int n;
    cout<<"Enter the value of n : "<<" ";
    cin >> n;
    
    cout << "Power of " << n << " is : " << pow(10);
    return 0;
}