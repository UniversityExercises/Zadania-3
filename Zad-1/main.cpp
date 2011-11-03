#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int suma;
    int dodatnie;
    int x=0;
    int y=0;
    double z;
    int a=0;
    int b=0;


    int tablica [2000];
    srand(time(0));

for(int i=0; i<2000; i++)
{
    tablica[i]=6000*(rand()/double(RAND_MAX))-3000;
    suma=suma+tablica[i];

    if(tablica[i]>0)
    {
        x=x+1;
    }

     if(tablica[i]<-1000)
    {
        y=y+1;
    }

    if(tablica[i]<1000)
    {
        a=a+tablica[i];
    }

    if(tablica[i]>=1000)
    {
        b=b+tablica[i];
    }
}

z=suma/2000;

cout<<"suma wszystkich elementow wpisanych do tablicy = "<<suma<<endl;
cout<<"liczba wszystkich elementow wiekszych od 0 = "<<x<<endl;
cout<<"liczba wszystkich elementow mniejszych od -1000 = "<<y<<endl;
cout<<"wartosc srednia z wszystkich elementów wpisanych do tablicy = "<<z<<endl;

if(a>b)
{
    cout<<"wartosc srednia elementow tablicy o indeksach od 0 do 999 jest wieksza niz \nwartosc srednia elementow tablicy o indeksach od 1000 do 1999"<<endl;
}
else
{
    cout<<"wartosc srednia elementow tablicy o indeksach od 1000 do 1999 jest wieksza niz \nwartosc srednia elementow tablicy o indeksach od 0 do 999"<<endl;
}
    return 0;
}
