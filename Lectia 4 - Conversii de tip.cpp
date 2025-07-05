// Conversii de tip in C++

/*
C++ ne permite sa consideram o valoare de un anumit tip ca fiind de alt tip.
Aceasta se numeste conversie de tip

Exista 2 tipuri de conversie:
    - Conversie implicita
    - Conversie explicita
*/


#include <iostream>
using namespace std;

int explicita()
{
    /*
        Conversia explicita a datelor inseamna modificarea manuala de catre programator
        (Type casting)

        Operatorul de conversie are sintaxele
            - (TIP) expresie
            - TIP(expresie)

    */    
   char c = 'A';
   cout << (int) c << endl; // 65
   cout << char(97) << endl; // a
    return 0;
}

int main()
{

    // Conversia implicita
    int n = 5;
    double x;
    
        //conversie de la int la double

    x = n; // => promovare de la int la double 

    cout << "n = " << n << endl;
    cout << "x = " << x << endl;


    /*
            - Conversia implicita intervine de la sine cand intr-o operatie avem operanzi de
        tipuri diferite. 
            
            - Conversua implicita se face doar daca operaznii sunt tipuri compatibile
                ** Daca tipurile nu sunt compatibile obtinem o eroare de sintaxa


    */

   int a;
   double b = 5.75;

        //Conversie de la double la int => pierdere de date

    a = b; // => retrogradare de la double la int

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 

    /*
    Pierederea de date in timpul conversiei (trunchiere de date) este un rezultat 
    care nu este neaparat un lucru rau, dar trebuie sa fim constienti de aceasta situatie
    
    Conversia este de doua feluri:
        - promovare 
        - retrogradare 

    2 + 1.5 = 3.5 (nu 3) are loc promovarea valorii 2 la tipul double 
    
    */

   explicita();


}