#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    char a[n];

    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    int male_litery=0;
    int duze_litery=0;
    int cyfry=0;
    int inny_znak=0;

    for (int i=0 ; i<n; i++)
    {
        if (a[i]>=97 && a[i]<=122)
        {
            male_litery=male_litery+1;
        }

         if (a[i]>=65 && a[i]<=90)
        {
            duze_litery=duze_litery+1;
        }

         if (a[i]>=48 && a[i]<=57)
        {
            cyfry=cyfry+1;
        }

         if ( (a[i]>=0 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]>=123 && a[i]<=127) )
        {
            inny_znak=inny_znak+1;
        }
    }

    cout<<"ilosc malych liter = "<<male_litery<<endl;
    cout<<"ilosc duzych liter = "<<duze_litery<<endl;
    cout<<"ilosc cyfr = "<<cyfry<<endl;
    cout<<"ilosc innych znakow = "<<inny_znak<<endl;

    return 0;
}
