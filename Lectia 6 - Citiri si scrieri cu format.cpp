// Citiri si scrieri cu format

/*
    Formatarea citirii si afisarii se face prin intermediul unor functii speciale, numite manipulatori.
    O parte din ele se afla in fisierele fstream si iostream iar
    altele se afla in fisierul header iomanip.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()

{

    // Lungimea
    cout << setw(10) << 123 << endl; // afiseaza 123 cu 10 spatii in fata

    /*
        Lungimea unei date afesate se refera la numarul de caractere folosite.
            Adica pentru a afisa 123 se folosesc 3 caractere. Acest comportament poate
            fi modificat cu ajutorul manipulatorului setw(n).

        Cand lungimea de afisare este specificata (si mai mare decat cea ocupata efectiv)
            datele pot fi aliniate la stanga(left) sau la dreapta(right).
    */

    cout << "|" << setw(10) << 2025 << "|" << endl;
    cout << "|" << setw(10) << left << 2025 << "|" << endl;
    cout << "|" << setw(10) << right << 2025 << "|" << endl;
    cout << "|" << setw(10) << internal << -2025 << "|" << endl;
    // cout << "|" << setw(10) << showpos << internal << 2025 << "|" << endl;

    // caracterul de umplere

    /*
        setfill(char f): daca valoarea afisata ocupa mai putin carcatere decat lungimea,
            pe pozitiile nefolosite se vor scrie caractere de umplere
    */

    cout << "|" << setw(10) << setfill('*') << 2025 << "|" << endl;

    // precizia
    /*
        setprecision(int n): numarul n de cifre folosite pentru afisarea valorilor reale
        in functie de context, poate reprezenta numarul total de cifre sau
        numarul de cifre dupa punctul zecimal.
    */

    cout << setprecision(3) << 3.14159 << endl; // afiseaza 3.14

    // Baza de numeratie

    /*
        dec - baza 10 (default)
        oct - baza 8
        hex - baza 16
        dec, oct, hex: in care se considera valoarea intreaga introdusa.
    */

    int num = 255;
    cout << dec << num << " " << oct << num << " " << hex << num << endl;

    // Formatul de afisare

    /*
        fixed, scientific sau implicitl
    */

    double pi = 3.14159;
    cout << fixed << setprecision(2) << pi << endl;      // afiseaza 3.14
    cout << scientific << setprecision(2) << pi << endl; // afiseaza 3.14e+00
    cout << pi << endl;                                  // afiseaza 3.14159

    // Modul de tratare a caracterelor albe
    /*
    skipws, noskipws: implicit, la citire se sare peste eventualele caractere albe
        aflate înainte de valoarea de citit.
        Dacă este setat modul noskipws și înainte de valoarea de citit există
                caractere albe, citirea va eșua.
    */

    char c1, c2;

    cin >> noskipws >> c1 >> c2;                    // introducem A
    cout << "[" << c1 << "][" << c2 << "]" << endl; // afiseaza [A][ ]

    // Afisarea valorilor de tip bool

    /*
        Valorile de tip bool sunt afișate ca valori numerice (1 sau 0 adica true sau false).
        Este posibil sa se afiseze valorile ca true sau false cu ajutorul manipulatorilor boolalpha si noboalpha.
    */

    cout << true << endl; // afiseaza 1
    cout << false << endl; // afiseaza 0

    cout << boolalpha << true << endl; // afiseaza true
    cout << false << endl; // afiseaza false

    cout << noboolalpha << false << endl; //anuleaza comanda de boolalpha

    cout << true << endl; // afiseaza 1
    cout << false << endl; // afiseaza 0

    return 0;
}