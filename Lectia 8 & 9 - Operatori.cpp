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

    Disjunctia: II (OR)
    false II false -> false
    false II true -> true
    true II false -> true
    true II true -> true

    Conjunctie: && (AND)
    false II false -> false
    false II true - false
    true II false -> false
    true || true -> true


    Legile lui De Morgan

    - sunt doua reguli logice care ne ajuta la transformarea espresiilor cu and (&&)
        si or (||) atunci cand aplicam negatia (!)
    1. !(A && B) = !A || !B
    2. !(A || B) = !A && !B
*/

    // Prima lege a lui De Morgan

    // Negarea unei conjunctii (AND) devine o disjunctie (OR) cu operanzi negati
/*
    int x;
    cout << "Introduceto un numar: ";
    cin >> x;
    /Expresia originala
    bool exprl = !(x >= 5 && x <= 10);
    /Expresia echivalenta conform legilor
    bool expr2 = (x < 5) || (x > 10);
    /Verificarea expresiilor
    if (exprl == expr2)
    {
        cout << "Legile lui Morgan sunt corecte"<<endl;
    }
    else
    {
        cout << "Eroare! Expresiile nu sunt echivalente!"<<endl;
    }
*/
    // A doua lege a lui De Morgan

    // Negarea unei disjunctii (OR) devine o conjunctie (AND) cu operanzii negati

    int x,y;
    cout << "Introduceti doua numar: ";
    cin >> x;
    cin >> y;
    //Expresia originala 
    bool expr1 = (x < 3) && (y > 7);
    //Expresia echivalenta conform legilor
    bool expr2 = !(x >= 3 || y <= 7);
    //Verificarea expresiilor
    if (expr1 == expr2)
    {
        cout << "Legile lui Morgan sunt corecte"<<endl;
    }
    else
    {
        cout << "Eroare! Expresiile nu sunt echivalente!"<<endl;
    }

    // Operatoruls de atribuire: =
    // Atribuirea este operatia prin care 0 variabila primeste o valoare
    int atribuire = 10;

    /*
    Atribuirea este o operatia, deci are rezultat. Rezultatul operatiei de atribuire
    este chiar variabila care primeste valoare.

    !!! Nu confundam operatia de atribuire (=) cu egalitatea (==) !!!

    */

    int val1,val2,val3;
    val1 = val2 = val3 = 10;

    int atr1 = 2;
    atr1 = atr1 + 4; // atr1= 2+4 -> atr1 == 6
    atr1 += 4;

    /*
        Operatorii de atribuire compusi
        
        +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=

    */

    // >>= Shift bit la dreapta si atribuire
    int bit = 8; // 1000 in binat
    bit >>= 2; //echivalent cu x = x >> 2;
    cout << bit; // 2 (0010 in binar)


    // Operatorii de incrementare si decrementare (++, --)
        /*
        Prin incrementarea unei variable se intelege marirea valorii sale cu 1
        Prin decrementarea unei variabile se intelege micsorarea valorii sale cu 1
        */

    return 0;

}
