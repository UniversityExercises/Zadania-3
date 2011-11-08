#include <iostream>

using namespace std;

int main()
{
    const int k = 6;
    double A[k][k];


// Wypelniamy tablice
    double n=0;

    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<k; j++)
        {
            A[i][j]= (5*n)/(n+1);
            n=n+1;
        }
    }

    //rysujemy tablice
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout << A[i][j] << "\t";
        }

        cout << endl;
    }

    cout << endl;



    // Policzyc i wydrukowc sume wartosci z przekatnych tablicy

    double suma=0;

    for (int i=0; i<k ; i++)
    {
        suma = suma + A[i][i] + A[k-1-i][i];
    }


    if (k%2 == 1)
    {
        suma = suma - A[k/2][k/2];
    }

    cout<<"suma wartosci z przekatnych = "<<suma<<endl;

    // Odwrócic kolejnosc elementów na przekatnych tablicy

    for (int i=0; i<k/2 ; i++)
    {
        double temp = 0;
        temp = A[i][i];
        A[i][i]=A[k-1-i][k-1-i];
        A[k-1-i][k-1-i] = temp;

        temp = 0;
        temp = A[k-1-i][i];
        A[k-1-i][i] = A[i][k-1-i];
        A[i][k-1-i] = temp;
    }

    //rysujemy tablice z odwroconymi przekatnymi

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;


    // Policzyc i wydrukowac, ile elementów z danego przedziału [a, b] jest nad obu przekatnymi.

    const double a = 3;
    const double b = 6;
    int ilosc_elementow=0;


    for(int i=0; i<k/2; i++)
    {
        for(int j=i+1; j<k-i-1; j++)
        {
            if(A[i][j] >= a && A[i][j] <= b)
            {
                ilosc_elementow++;
            }
        }
    }

    cout<<"ilosc elementow z przedzialu ["<<a<<", "<<b<<"] = "<<ilosc_elementow<<endl;

    return 0;
}
