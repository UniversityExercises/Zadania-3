#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int zgadnij;
    int Array[10];
    srand(time(0));
    int x=0;   // w tej zmiennej zapisywana jest informacja czy zgadles
    double wybor;



    cout<<"Nowa gra - 1"<<endl;
    cout<<"Wyjdz - 2"<<endl;


    do
    {
        cout<<"\nWybierz [1-2]: ";
        cin>>wybor;
    }
    while(wybor!=1 && wybor!=2);


    while (wybor==1)
    {
        cout<<"losowanie..."<<endl;

        for (int i=0; i<10 ; i++)
        {
            Array[i]=20*(rand()/double (RAND_MAX));
        }

        for (int k=0; k<3 ; k++)
        {
            cout<<"Zgadnij liczbe [0-20]: ";
            cin>>zgadnij;
            cout<<endl;


            for (int y=0 ; y<10; y++)
            {
                if (zgadnij == Array[y])
                {
                x=1;
                }

            }

            if (x == 1)
                cout<<"trafiles!"<<endl;
            else
                cout<<"Niestety nie trafiles, sprobuj ponownie!"<<endl;
            x=0;
        }

            cout<<endl;
            cout<<"Nowa gra - 1"<<endl;
            cout<<"Wyjdz - 2"<<endl;

            do
            {
                cout<<"\nWybierz [1-2]: ";
                cin>>wybor;
            }
            while(wybor!=1 && wybor!=2);

    }

    if(wybor==2)
    {
    return 0;
    }



    return 0;
}
