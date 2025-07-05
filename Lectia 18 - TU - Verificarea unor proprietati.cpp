// Verificarea unor proprietati

/*
    Putem verifica proprietatile unor valori din interiorul unui vector.

    Doua intrbari posibile pentru verificare:

    1. Toate elementele respecta o regula?
    2. Exista cel putin un element care respecta o regula?

    Exemplu:
    Sa presupunem ca regula este: "elementul este par"-> X[i] % 2 == 0.

    1. Verificarea daca toate elementele respecta regula:

    Exemple:

    Cod 1: cu for si conditie (if)

    bool OK = true;
    for (int i = 0; i < n && OK; i++)
        if (X[i] % 2 != 0) // regula: elementul sa fie par
            OK = false;


    cod 2:
    bool OK = true;
    int i = 0;
    while (i < n && OK) 
    {
        if (X[i] % 2 != 0) // regula: elementul sa fie par
            OK = false;
        else
            i++;
    }

    2. Verificarea daca exista cel putin un element care respecta regula:

    Exemplu:
    Cod 1: cu for si conditie (if)
    bool OK = false;
    for (int i = 0; i < n && !OK; i++)
        if (X[i] % 2 == 0)
            OK = true;

    Cod 2: cu while si conditie (if)
    bool OK = false;
    int i = 0;
    while (i < n && !OK) 
    {
        if (X[i] % 2 == 0)
            OK = true;
        else
            i++;
    }

*/

/*
    Exercitiu:
    Se da un vector cu n numere intregi. Sa se verifice daca toate elementele
    sun strict pozitive.
    Daca da, sa se aduage la finalul vectorului valorea 100.
    Daca nu, sa stearga primul element negativ din vector.

    Date de intrare:
    int X[16] = {5, 3, 7, -2, 9};
    int n = 5;
    Rezultatul: -2 este neagtiv, nu toate sunt pozitive si stergeni
*/

#include <iostream>
using namespace std;
int main() 
{
    int X[16] = {5, 3, 7, -2, 9};
    int n = 5;
    bool OK = true;
    int i = 0;
    while (i < n && OK) 
    {
        if (X[i] <= 0) // regula: elementul sa fie strict pozitiv
            OK = false;
        else
            i++;
    }
    if (OK) {
        // Toate elementele sunt strict pozitive
        cout << "Toate elementele sunt strict pozitive. Se adauga 100 la final." << endl;
        X[n] = 100; // Adaugam 100 la finalul vectorului
        n++; // Incrementam dimensiunea vectorului
    } else {
        // Nu toate elementele sunt strict pozitive, se sterge primul element negativ
        cout << "Nu toate elementele sunt strict pozitive. Se sterge primul element negativ." << endl;
        for (int j = 0; j < n - 1; j++) {
            if (X[j] < 0) {
                for (int k = j; k < n - 1; k++) {
                    X[k] = X[k + 1]; // Mutam elementele spre stanga
                }
                n--; // Scadem dimensiunea vectorului
                break; // Iesim din bucla dupa ce am sters primul element negativ
            }
        }
    }
    // Afisam vectorul final
    cout << "Vectorul final: ";
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
    return 0;
}