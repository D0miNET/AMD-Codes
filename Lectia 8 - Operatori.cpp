#include <iostream>
using namespace std;

/* Operatorii in C++

    O operatie este alctuita din operanzi si operator.
    Operanzii — valorile cu care se fac opratiile
    Operatorii — este simbol care stabileste ce se intampla cu Operanzii

    Operatori(nr de operanzi) pot fi de 3 feluri:
        1. Operatori unari (-7, +3, -250)
        2. Operatori binari (2+5, 3-3, 203*400)
        3. Operatori ternari (a>b ? 5 : 10)

    *O operatie care are ca si operanzi alte operatii este numita expresie aritmetica*
*/

int main()
{
    // Operatori aritmetici

    /*

    - : scaderea a doua nr
    + : adunarea a doua nr
/   *, : inmultirea a doua nr
    / : impartirea a doua nr
    % : restul impartirii a doua nr adica (Modulo)

    *In C++ nu exista operator pentru ridiccarea la putere*

    Pentru operatiile de impartire
        - Daca operanzii sunt de tip intreg (int, short, char)
            rezultatul operatiei va fi intreg
        - Daca operanzii sunt de tip real (float, double, long double)
            se va realiza impartirea zecimala iar rezultatul va fi cu virgula 
        

    */

    int N = 11, M = 3;
    double X = 11, Y = -3.5;
    cout<<" + X = "<<X<<endl;
    cout<<" - Y = "<<Y<<endl;
    cout<<" - + N = "<<-+N<<endl;

    //Impartirea
    cout << "N / M = " << N/M << endl; // Rezulta: 3.66667
    cout << " X / Y = " << X/Y << endl; // Rezulta: -3.14286
    cout << " X / 2.0 = " << X/2.0 << endl; // Rezulta: 5.5
    cout << " M / 2 = " << M/2 << endl; // Rezulta: 1 
    cout << " M / 2.0 =" << M/2.0 << endl; // Rezulta: 1.5

    //Modulo
    /*
        Functioneaza daca ambii operanzi sunt de tip intreg
        El poate fi utilizat pentru a afla ultima cifra a lui 276
    */
   cout << "Ultima cifra a lui 276 este: " << 276 % 10 << endl; // Rezulta: 6
   cout << "Penultima cifra a lui 276 este: " << 276 % 100 / 10 << endl; // Rezulta: 7
   cout << " N % M = " << N%M << endl; // Rezulta: 2
   cout << " 30 % 10 = " << 30%10 << endl; // Rezulta: 0

   /*
    -Nu se poate face inpartirea la 0
    -Daca cel putin un operand al impartirii intregi sau al
        operatiei modulo este negativ, rezultatul va depinde
        de compilatorul folosit
   */

   //Operatorii relationali 
   /*
        < : mai mic
        > : mai mare
        <= : mai mic sau egal
        >= : mai mare sau egal
        == : egal
        != : diferit

        Stabilesc daca intre doi operanzi are loc o anumita relatie

        * Rezultatul va fi intotdeauna mereu adevarat sau fals (1 si 0) *

        !!! Cea mai comuna eroare este confundarea operatorului == cu egal = !!!
                == compara 2 valori
                = atribuie o valoare

        O alta eroare ar ti comparea mai multor numere.
            a < b < c : conditia este adevarata DACA numerele
                sunt in ordine strict crescatoare. Rezulatul
                poate fi diterit datorita modului in care se fac
                operatiile
   */
  cout << (5 > 4 > 3); // 0
  /*
   (5 > 4 > 3) = (5 > 4) > 3

   (5 > 4) = adevarat (1)
    1 > 3 = fals (0)

*/

  // Operatori logici
    /*
    ! : negatie
    || : Disjunctia (OR)
    && : Conjuctia (AND)
    
    Operatorii logici pot ti aplicati oricaror valori numerice
    si au ca rezultat una din valorile 0 sau 1

    Negatia: !
    !true este talse. Orice valoare nenula negativa devine 0
    !false este true. 0 negat devine 1

*/
    return 0;
}
