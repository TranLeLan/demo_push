#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// Bai 1 queue FIFO
int lastDigitDiffZero(int n)
{
    int n_giaithua=1;
    for (int i=1;i<=n;i++)
    {
        n_giaithua=n_giaithua*i;
        while(n_giaithua%10==0)
        {
            n_giaithua=n_giaithua/10;
        }
    }
    return n_giaithua%10;
}
int main()
{
    cout<<lastDigitDiffZero(20);
    return 0;

}

