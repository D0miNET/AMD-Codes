/* Tablouri unidimensionale

    Tablurile unidimensionale se refera la vectori.
    Momentan, vectorii sunt tratati ca tablouri (arrays) de 0
    singura dimensiune, adica de elemente de acelasi tip,
    care sun accesibile printr-un index

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
int v[100] -> vector (tablou undimenstional) de 100 de valori intregi
}



Caracteristici:
    - indexahea incepe de la 0 (v[0], v[1],....v[99])
    - dimensiunea este fixa (nu se poate schimba dupa declarare)
    - se parcurg cu un for
    - cand il declaram vectorul nu este necesar sa fie singura variabila declarata

    int n, x[10], m, Y[100], p;

    - vectorii declarati global sunt initializati cu 0;
    - vectorii declarati local sunt intializati cu valori aleatorii

    Referirea unui element
    - se referee la accesarea lui folosind vectorul si indexul
    int v[5] = {10, 20, 30, 40, 50};
    cout << v[2]; >> imi va afisa 30, adica pozitia 2

    Elementele unui vector sunt ca niste variablile normale
        int X[l0];
            inseamna ca avem int X[0], X[l] ...-> X[9] '
        Putem astfel:
            - citim o valore in vector: cin >> X[0];
            - modificam o valoare: X[0] = 17;
            - folosi o vloare: cout << X[0];
            - facem calcule: cout << x[0]/5;
        C++ nu verifica daca indicele este valid
            Daca scriem X[15] = 99;
            - desi x are doar 10 elemente (de la X[0] la X[9])
                nu vom primi eroare DAR:
                - programul va da rezultate gresite
                - poate crapa (segementaion fault)
                - poate parea ca functioneaza, dar greseste pe ascuns
            De aceea trebuie sa ne siguram ca indexul e in parametri


Vectorul are doua dimensiuni importante:
1.Dimensiunea fizica = cat de mare este vectorul in memorie
    Aceasta este data la declarare si este fixa.
        Exemplu: int v[100]; // vector cu 100 de pozitii

2.Dimensiunea logica = cate elemente folosim in program
    Aceasta este determinata de 0 variabila, deobicei denumita n
        Exemplu:
    
        int n;
        cin >> n; // sa zicem ca n = 5
        for(int i = 0; i < n; i++)
        {
            cin >> v[i]; // citim 5 elemente // v[0], v[1], v[2], v[3], v[4]
        }

        Desi mai sus am declarat ca v are 199 de locuri, doar primele 5
        sunt folosite. Aceasta este dimensiunea logica

        Pe scurt:
        - dimensiunea fizica = cate locuri are vectorul ( v[100] )
        - dimensiunea logica = cate sunt folosite acum (n = 5)

        Parcurgerea unui vector (accesarea elementelor lui pe rand)
            - accesam fiecare element din vector, unul cate unul, folosind un index si for
            Exemplu:
    
            int X[100], n;
            cin >> n; // n = 5
            for(int i = 0; i < n; i++)
            {
            } X[i] = 1;
            }
            
            - aici X[0], X[l], ..., X[n-l] vor primi valoarea 1
            - parcurea este crescatoare, ca pe axa numerelor, de la stanga la dreaptd

            Parcugerea inversa (de la dreapta la stanga)

            for(int i = n ~ 1; i >= 9; i-—)
            {
                X[i] = 1;
            }

    Exercitii:
    1. Citim un vector cu n elemente intregi. Sa afisam suma lor
    Date intrare:
    n = 5
    v = 1 2 3 4 5
    Date iesire: 15




*/

#include <iostream>
#include <iomanip>
using namespace std;

// int main()
// {
//     int n, v[100];
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int suma = 0;
//     for(int i = 0; i < n; i++)
//     {
//         suma += v[i];
//     }
//     cout << suma << endl;
//     return 0;
// }

// 2. Se citeste un vector cu n elemente. Afiseaza elementele
// in ordine inversa

// Date de intrare:

// n = 3

// v = 19 29 39

// Date de iesire:

// 39 29 19

// int main()
// {
//     int n, v[100];
//     cin >> n;
//     for(int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     for(int i = n - 1; i >= 0; i--)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }