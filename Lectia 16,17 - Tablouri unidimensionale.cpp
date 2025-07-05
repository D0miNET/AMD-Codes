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

// #include <iostream>
// #include <iomanip>
// using namespace std;

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

/*
    Citirea unui Vector

    În C++ un vector nu poate fi citit în întregime cu o singură instrucțiune de genul:
        "cin >> x;" ---->> Nu merge, ne va da eroare.
    Nu funcționează deoarece nu știe să interpreteze x ca pe o colecție de elemente.
    x este adresa primului element din tablou, iar cin nu are informații despre
    câte elemente trebuie să citească, cum să le separe etc.

    Cum să facem corect citirea elementelor individuale cu o buclă for:

    int n, x[100];
    cin >> n; // numărul de elemente citit

    for(int i = 0; i < n; i++)
    {
        cin >> x[i]; // citim elementele
    }

    Explicație:
    1. x[100] - definim un vector de maxim 100 de numere întregi
    2. n - numărul efectiv de elemente pe care le folosim
    3. for - parcurgem vectorul de la 0 la n-1
    4. x[i] - elementul curent, care este citit cu cin



    Afișarea unui Vector
    La fel ca la citire, nici afișarea unui vector nu se poate face direct:
    int x[100], n;
    cout << x; ->> Nu va afișa elementele vectorului.
    Nu ne va da eroare de compilare însă ce se întâmplă de fapt:
        Va afișa o adresă din memorie: 0x7ffd3c1aaf40
    Asta se întâmplă pentru că:
    1. x este de fapt un pointer către primul element al vectorului
    2. cout nu știe că vrei să afișezi toate elementele - el primește doar un pointer


    Cum afișăm corect elementele unui vector:

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << ' ';
    }

    În ordine inversă:

    for (int i = n - 1; i >= 0; i--)
    {
        cout << x[i] << ' ';
    }

    Indexarea elementelor unui Vector

    Într-un vector elementele sunt numerotate (indexate) automat începând de la 0

    int v[100]; —> indicii sunt: v[0], v[1], v[2]...v[99] !!! Ultimul element este 99 și nu 100 !!!

    De ce începe indexarea de la 0:
    Este o caracteristică a limbajelor C și C++, moștenită din modul în care funcționează pointerii și adresele din memorie.

    Indexarea în varianta standard - de la 0

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    Indexarea de la 1 - o convenție (nu este o regulă a limbajului)
    Uneori, pentru a corespunde mai bine cu formulările din probleme, unii programatori
    aleg să ignore intenționat poziția v[0] și încep de la v[1]:

    int v[101]; --> alocă cu 1 mai mult

    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << ' ';
    }

    ATENȚIE:
    v[0] există dar nu este folosit.
    Tabloul trebuie declarat cu o dimensiune cu 1 mai mare decât numărul maxim de elemente.

    Inițializarea elementelor unui Vector
    Înseamnă să dăm valori elementelor chiar în momentul declarării tabloului.

    Exemple:

    1. Inițializare fără dimensiune specifică
    int A[] = {10, 20, 30, 40};
        - Numărul automat de elemente va fi 4

    2. Inițializare parțială cu dimensiune fixă
    int B[10] = {10, 20, 30, 40};
        - Vectorul b are 10 elemente
        - Primele 4 vor fi b[0] = 10, b[1] = 20, b[2] = 30, b[3] = 40
        - Restul de la B[4] până la B[9] vor fi inițializate automat cu 0

    3. Inițializare completă cu 0
    int C[10] = {0};
        - Toate cele 10 elemente vor fi 0

    4. Inițializare cu un singur element setat
    int A[10] = {1};
        - Doar A[0] = 1, restul A[1] până la A[9] vor fi 0

*/

/*

1. Numara elementele pare Si impare
Enunt: Se citeste numarul natural n si un vector cu n numere intregi. Afiseaza cate dinte
ele sunt pare si cate sunt impare
Input:
n=5
vector 2 A 7 9 2 6
Output:

Pare: 3
Impare: 2
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, v[100], i, p = 0 , imp = 0;
    cin >> n;
    for (i = 0; i < n; i++) cin >> v[i];
    for (i = 0; i < n; i++)
        if (v[i] % 2 == 0)
            p++;
        else
            imp++;
    cout << "Pare: " << p << endl;
    cout << "Impare: " << imp << endl;
    return 0;
}

/*
2. Atisarea in ordine inverse

Se da un vector V[1...n] cu n numere intregi (Folosim indexarea de la 1). Afiseaza elementele
in ordine invesa pe aceeasi linie.

Atentie: Declaram vectorul cu o dimnesiune de n + 1 L

Input:

n=4

Vector = 3 5 7 9

Ouput:

9753
*/

int main()
{
    int n, v[101], i;
    cin >> n;
    for (i = 1; i <= n; i++) cin >> v[i];
    for (i = n; i >= 1; i--) cout << v[i] << " ";
    cout << endl;
    return 0;
}
