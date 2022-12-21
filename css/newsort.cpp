#include <iostream>
using namespace std;

int main()
{
    int a[10]={3,8,2,7,1,5,0,3,9,7};
    for(int i=1;i<10;i++)
    {
        if(a[0]<a[i])
        swap(a[0],a[i]);
    }
    for(int i=0;i<10;i++)
    cout<<a[i]<<"  ";
    return 0;
}