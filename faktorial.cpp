// PROGRAM MENGHITUNG FAKTORIAL DARI SEBUAH BILANGAN - 'ALFEUS MARTINUS'
#include <iostream>
using namespace std;

int main ()
{
    int input;
    int i;
    int faktorial = 1;

        cout << "=================================================" <<endl;
        cout << "PROGRAM MENGHITUNG FAKTORIAL DARI SEBUAH BILANGAN" <<endl;
        cout << "=================================================\n\n" <<endl;
        cout << "MASUKAN SATU ANGKA YANG AKAN DIHITUNG : ";
        cin >> input;

            for (i=1; i<=input; i++)
            {
                cout << i <<endl;
                faktorial = faktorial * i;
            }

        cout <<endl;
        cout << input << "! = "<<faktorial<<endl;
   cin.get();
   return 0;     
}