#include <iostream>
using namespace std;

int testCase(int varT,int *varPTR)
{
    int A;
    for (int i=0;i<varT;i++)
    {
        cin >> A;
        if (A>1000)
        {
            cout << "Error, input limit: 1000";
            return 0;
        }
        *varPTR=A+10;
        varPTR++;
    }
    return 0;
}

int main(){
    int T;
    int A[100]{1};
    cin >> T;
    if (T<1 || T>100)
    {
        cout << "Error, input limit: 100";
        return 0;
    }
    int *ptrA;
    ptrA=A;
    testCase(T,ptrA);
    for (int i=0;i<T;i++)
    {
        cout << A[i] << '\n';
    }
    return 0;
}
