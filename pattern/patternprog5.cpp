/*Number pattern

      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}