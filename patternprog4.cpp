/*Rhoumbus pattern

    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
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
        for(int k=0;k<n;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}