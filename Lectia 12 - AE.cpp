// Maxime si Minime
/*
    Putem sa determinam minimul si maximul unor valori folosind
    structuri repetitive.
        - daca se cunoaste numarul de valori de la inceput,
        putem folosi instructiunea for
        - daca NU se cunoaste numarul de valori de la inceput,
        putem folosi instructiunea while
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*
    Se dau N numere intregi.
    Calculati cel mai mare dintre N numere date
        -stim numarul de valori de la inceput
        1. initializam 0 variabila max corespunzator
        2. citim numerele
        3. Comparam fiecare numar cu variabila max,
            si daca este cazul se actualizeaza MAX.
    */
    /*
    int x,n,i,max;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    max=x;
    for(i=2;i<=n;i++)
    {
        cout<<"x=";
        cin>>x;
        if(x>max)
        {
            max=x;
        }
    }
    cout<<"max="<<max;
    */
    /*
    Determinarea minimului
    Se dau N numere intregi.
    Calculati cel mai mic dintre N numere date
    - numarul de valori se cunoaste de la inceput
    1. initializam o variabila min corespunzator
    2. citim numerele
    3. Comparam fiecare numar cu variabila min,|
    I si daca este cazul se actualizeaza.
    */

    int x,n,i,min;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    min=x;
    for(i=1;i<n;i++)
    {
        cout<<"x=";
        cin>>x;
        min=x;
        if(x<min)
            min=x;
    }
    cout<<"min="<<min;

    return 0;
}
