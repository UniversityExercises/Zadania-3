#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    double suma=0;
    const int k=10;
    double A[10][k];
    int kolumna_zero=0;
    double schowek=0;


    //wype³niamy tablicê


    for (int x=0; x<10 ; x++)
    {
        for (int y=0; y<k; y++)
        {
            A[x][y]=30*(rand()/double(RAND_MAX))-15;
        }
    }

    // obliczamy œredni¹ arytmetyczn¹

    for (int x=0; x<10 ; x++)
    {
        for (int y=0; y<k; y++)
        {
            if( (A[x][y]) > 0 )
            {
                suma = suma + A[x][y];
            }
        }
    }

    cout<<"srednia arytmetyczna dodatnich wartosci = "<<suma/(10*k)<<endl;


    // zerujemy na obwodzie elementy wieksze od sredniej arytmetycznej

    for (int y=0; y<k; y++)
    {
        if( A[0][y] > suma/(10*k) )
        {
            A[0][y] = 0;
        }
    }

    for (int y=0; y<k; y++)
    {
        if( A[9][y] > suma/(10*k) )
        {
            A[9][y] = 0;
        }
    }

     for (int x=0; x<10; x++)
    {
        if( A[x][0] > suma/(10*k) )
        {
            A[x][0] = 0;
        }
    }

    for (int x=0; x<10; x++)
    {
        if( A[x][9] > suma/(10*k) )
        {
            A[x][9] = 0;
        }
    }

    // przesuwamy cyklicznie do góry o jedna pozycje wartosci tych kolumn, które maja chociaz
    // jedno zero.

    for(int y=0; y<k; y++)
    {

        for (int x=0; x<10; x++)
        {
            if( A[x][y] == 0 )
            {
                kolumna_zero=1;
            }
        }

        if (kolumna_zero == 1)
        {
            schowek = A[0][y];
            for (int x=0; x<9; x++)
            {
                A[x][y]=A[x+1][y];
            }
            A[9][y]=schowek;
        }

    }
    return 0;
}
