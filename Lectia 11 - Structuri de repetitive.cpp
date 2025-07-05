///Structurii repetitive
/*
    Structurile repetitive sunt folosite pentru a repeta o secventa de instructiuni de mai multe ori (Bucla/Loop).

    > In C++ avem 3 structuri repetitive:
            - while - cu numar necunoscut de pasi si test intial
            - do-while - cu numar necunoscut de pasi si test final
            - for - cu numar necunoscut de pasi si test final
                  - se folosete fecvent cand se cunoaste mumarul de pasi
    > Caracteristicile structurilor repetitive:
         - cu nr fix de repetari (for)
         - cu nr cunoscut de repetari (while)
             -stim de la inceput de cate ori se executa instructiunile
         - cu nr necunoscut de repetari (do-while)
             - codul se va executa atat timp cand o conditia este adevarata.
             - la fiecare pas se va evalua conditia, iar daca este adevarata
                 se va executa codul

    Structurile repetitive cu numar necunoscut pot ti:
        - cu test initial
            - se evalueaza conditia prim; data iar DACA este adevarata
                se executa codul si procesul se reia

        - cu test final
            - mai intai se executa codul apoi se evalueaza conditia
                ulterior daca este adevarata, procesul se reia

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Structura repetitiva while
    /*
    int n = 1;
    int s=0;
    int i = 1;
    cout << "Introduceti un numar: "; cin >> n;
    while (i <= n)
    {
        s += i;
        i++;
    }
    cout<<"s= "<<s<<" ";
    */
    /*
        1. Evalueaza conditia => True/False
        2. Daca este True executa codul si se reia pasul l
           Daca este False se trece la instructiune de dupa while
    */

    // Structura repetitiva do-while
    /*
    int n;
    cout << "Introduceti un numar: ";
    cin >> n;
    int s = 0;
    int i = 1;
    do
    {
        s += i;
        i++;
    }
    while (i <= n);

    cout << s << endl;

    */

   // Structura repetitiva for
/*
    int n;
    cout << "Introduceti un numar: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    cout << s << endl;
*/
    // Instructiunea Break
    /*
    - intrerupe o intructiune repetitiva si trece la
    instructiunea care urmeaza
    */
/*
    int n;
    cout << "Introduceti un numar: ";
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++)
    {
    s += i;
    if (i == 3)
    {
        break; // se opreste cand i ajunge la 3
    }
    }
    cout << s << endl;
*/

    // Instructiunea Continue
    /*
        - intrerupe executia curenta a instructiunii repetitive
            si trece la urmatorul pas

    */
   int n;
   cout << "Introduceti un numar: ";
   cin >> n;
   int s = 0;
   for(int i = 1; i <= n; i++)
   {
    if(i%2 == 0)
    {
        continue;
    }
    s += i;
   }
   cout << s << endl;


    return 0;
}
