/*Rhoumbus pattern

         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
             cout<<"  ";
        }
        int s=(2*i-1);
        for(int k=1;k<=s;k++)
        {
             cout<<"* ";
        }
         cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i-1;j>0;j--)
        {
            cout<<"  ";
        }
        int p,q;
        p=(2*n)-1;
        q=(2*(i-1));
        for(int k=1;k<=(p-q);k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}