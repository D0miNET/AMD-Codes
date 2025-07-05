// intrari si iesiri

#include <iostream>

using namespace std;

void intrare()
{
    int n = 7;
    cout << "n = ";
    cin >> n;
    cout << "n este " << n << endl;
    cout << "patratul lui n este " << n * n << endl;
}

int main()
{

    /*
    Operatiile de intrare si iesire sunt operatiile prin care
    un program primeste sau afiseaza rezultate

        - operatii de intrare - datele intra in program
                              - programul citeste datele

        - operatii de iesire - datele ies din program
                             - programul afiseaza datele

    */
    int n = 16;
    cout << "Salut!" << endl; // afisare pe ecran a mesajului "Salut!"
    cout << 17;               // afisare pe ecran a numarului 17
    cout << n;                // afisare pe ecran a numarului 16 (variabila n)

    /*

    cout se foloseste impreuna cu operatorul de insertie <<
    urmat de ce se va afisa
    cout afiseaza incepand de la stanga la dreapta

    ** Daca textul este intre ghilimele se afiseaza ca atare **
    ** Daca textul nu este intre ghilimele va fi considerat variabila **

    */

    int salut = 3;
    cout << "Salut"; // afiseaza cuvantul Salut
    cout << salut;   // afiseaza valoarea variabeli salut

    cout << "Ana" << "Are" << "Mere"; // afiseaza AnaAreMere
    int nr_mere = 17;
    cout << "Ana " << "are " << nr_mere << " mere." << endl; // afiseaza Ana are 17 mere
    // cout nu poate adauga automat sfarsitul de linie sau spatii intre cuvinte
    // pentru a adauga spatii intre cuvinte se foloseste << " "

    cout << "Aceasta este o\n";
    cout << "propozitie mai lungal";

    // \n - trece la linia urmatoare si este din grupa caracterelor de control
    // endl - trece la linia urmatoare si este un operator de manipulare (endl = end line),(goleste buffer-ul stream-ului cout )
    // endl goleste buffer-ul stream-ului cout forteaza afisarea pe ecran a tuturor caracterelor inserate
    // endl poate produce intarzieri in executia programuluil
    // - buffer-ul este o zona de memorie temporara
    // in care se stocheaza datele inainte de a fi afisate

    /*

        Exista diferite modalitati de a realiza operatiile de
        intrare/iesire, din consola(terminal) sau direct din fisiere

        Totate tipurile se numesc STREAM sau FLUX.
        Bibleoteca standard C++ permite:
            - cout - stream standard de iesire
            - cin - stream sandard de intrare
            - cerr - stream standard de iesire pentru erori
            - clog - stream standard de iesire pentru log-uri
            - istream - stream de intrare
            - ostream - stream de iesire

        stream-il de intrare cin
        = tastatura de cele mai multe ori este dizpozitivul de intrare
        - se foloseste impreuna cu operatorul de extragere >>
        - urmata de variabila care se va memora valoarea extrasa

    */
    int v;
    cout << "Introduceti un numar: ";
    cin >> v;

    intrare();
    return 0;
}

/*

    In plus! (Avansate!)

    Operatorul de afisare <<
        - afiseaza date pe ecran
        - se foloseste pentru a afisa date pe ecran
        - se foloseste pentru a afisa date pe ecran si a le afisa

    Operatorul de citire >>
        - citeste date de la tastatura
        - se foloseste pentru a citi date de la tastatura
        - se foloseste pentru a citi date de la tastatura si a le stoca in variabile

    Operatorul de manipulare endl
        - este folosit pentru a trece la linia urmatoare
        - este folosit pentru a trece la linia urmatoare si a afisa datele
*/