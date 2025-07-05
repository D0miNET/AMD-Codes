/*

    Tablouri bidimensionale (matrice) in C++

    Un tablou bidimensional este, de fapt, un tablou de tablouri
    Adica, fiecare element din primul tablou este la randul lui un alt tablou

    Exemplu:
    int X[3][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };

    Cum accesam elementele:
    Fiecare element dintr-o matrice se acceseaza cu doi indici:
    matrice[i][j]

    Exemplu:
    matrice[1][2] = 0;

    Utilitate:
    - reprezentam tabele de date (note, scoruri, imagini etc.)
    - lucram cu jocuri sau harti (griduri)
    - facem calcule matematice cu matrice (determinant, inmultire)

    Exercitiu:
    Introduce o matrice de numere intregi cu 2 linii si 3 coloane.
    Afiseaza matricea intr-un format de tabel.

*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

    ifstream fin("date.in");
    ofstream fout("date.out");


int main()
{
    int a[10][10];
    int n, m;
    fin >> n >> m; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> a[i][j];
        }
    }


    cout << "=========" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << '|' << setw(2) << a[i][j] << setw(2);
        }
        cout << '|' << endl;
    }
    cout << "=========" << endl;


    return 0;
}


/*
    Declarea matricelor in c++

    Declaram o matrice specificand doua dimensiuni:

    tip_denumire numefNumarLinii][NumarColoane]
    Indicii incep de la 0. Deci:
    A[0][0] este primul element
    In cazul matricei "int matrice[5][10]" —> ultimele elemente sunt matrice[4][9]

    Atentie la limite! (Erori frecvente)

    Daca folosim indici in fara limitelor declare, de exemplu:
    matrice[-1][7] // linie invalida
    matrice[5][2] // linia 5 nu exista in matrice[5][10]
    matrice[1][10] // coloana 10 nu exista

    Comportamentul in acest caz este impreivizibil: erori, valori gresite sau mesajul:
    Caught fatal signal 11


    Memoria ocupata de 0 matrice
    Calcul:
    Memoria ocupata = numar linii x numar coloane x dimensiune tip de date
    int A[1006][1800];
    - numar elemente: 1000 X 1000 = 1 000 000
    - fiecare int ocupa 4 octeti (bytes)
    - TOTAL: 4 x 1.000.000 = 4.000.000 bytes (~ 4MB)

    Gandire alternative:
    matrice = vector de vectori<int>

    Parcurgerea unei matrici

    - inseamna accesarea tututror elementelor dintr-o matrice, intr-i anumita ordine, pentru
    a le citi, modifica sau afisa.
    Dimensiuni fizice vs logice
    Dimensiunea fizica: cate linii Si coloane poate avea maxim matricea (cat am declarat)
    Dimensiunea logica: cate linii Si coloane folosim efectiv (cat umplem cu date)

    1. Parcurgerea unei matrici

    - inseamna accesarea tututror elementelor dintr—o matrice, intr—i anumita ordine, pentru a le citi, modifica sau afisa.

    2. Dimensiuni fizice vs logice
    
    Dimensiunea fizica: cate linii si coloane poate avea maxim matricea (cat am declarat)

    Dimensiunea logica: cate linii si coloane are efectiv in momentul executiei programului
    
    3. Indexarea: de la 0 vs de la 1
    
    - daca vrem sa indexam de la 1(pentru a semana mai mult cu matematica), declari matricea cu
    o linie si 0 coloana in plus
    
    int A[101][101];
    
    4. Parcurgerea pe linii
    5. Parcurgerea pe coloane
    6. Parcurgerea unei singure linii
    7. Parcurgerea unei singure coloane
    8. Parcurgerea unei matrici patratice
    9. Afisarea unei matrici


*/