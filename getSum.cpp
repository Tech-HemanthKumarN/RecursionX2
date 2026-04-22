#include<iostream>
using namespace std;
int getSum(int n){
    if(n == 1){
        return 1;
    }
    int recAns = getSum(n - 1);
    int ans = n + recAns;
    return ans;
}
int main()
{
    cout<< getSum(5) <<endl;
    return 0;
} 
