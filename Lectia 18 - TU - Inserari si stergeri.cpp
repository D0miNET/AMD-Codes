// Inserari si stergeri
/*
    Stergerea

    Pentru a sterge un element aflat pe o pozitie "P" dintr-un vector, trbuie
    sa mutam toate elementele dupa pozitia "P" cu o pozitie mai 1a stanga, pentru
    a acoperi locul sters. Apoi scadem dimneisiunea vectorului (n--)

    exemplu:
    int X[10] = {2, 4 , 7, 9, 5, 6, 1 , 8 ,3, 0};
    int n = 10;
    int p = 4;

    Pasul 1: Incepem de la p si mutam fiecare element cu unul spre stanga

    for (int i = p; i < n - 1; i++) {
        X[i] = X[i + 1];
    }

    Pasul 2: Scadem dimensiunea vectorului
    n--;

    Inserarea
        Inserea unui elemnt la un vector presupune doua lucruri:

        1. Crestrea dimnesiunii loaice a vectorului (n).
        2. Scrierea valorii noi la fanlul vectorului, pe pozita n.

        Acest lucru este posibil daca vectorul are dimensiune ftizica suficienta

        Exemplu:

        int x[100];
        int n = 5;
        X[0] = 2;
        X[l] = 4;
        X[2] = 6;
        X[3] = 8;
        X[4] = 10;

        int valoareNoua = 12;
        X[n] = valoareaNoua;
        n++;

*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int X[100];
//     int n = 5;

//     // Initializare vector
//     X[0] = 2;
//     X[1] = 4;
//     X[2] = 6;
//     X[3] = 8;
//     X[4] = 10;

//     // Afisare vector initial
//     cout << "Vector initial: ";
//     for (int i = 0; i < n; i++) {
//         cout << X[i] << " ";
//     }
//     cout << endl;

//     // Inserare element nou
//     int valoareNoua = 12;
//     X[n] = valoareNoua; // Adaugam noul element la finalul vectorului
//     n++; // Crestem dimensiunea vectorului

//     // Afisare vector dupa inserare
//     cout << "Vector dupa inserare: ";
//     for (int i = 0; i < n; i++) {
//         cout << X[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

/*
    Rezultat:
    Vector initial: 2 4 6 8 10
    Vector dupa inserare: 2 4 6 8 10 12

*/

/*
int main()
{
    int X[l00] = {1, 3, 4, 5, 6} // vectorul initial
    int n = 5; // dimensiunea logica
    int p = 3; // inseream pe potizia cu numarul 3
    int valoareaNoua = 4;

     Mutam elementele sprea dreaptea pentru a face loc
    
    for(int i = n; i > p; i--) I
    {
        i X[i] = X[i - 1];
    }

     Adaugam noul element
    X[p] = valoareaNoua;
    n++; // Crestem dimensiunea logica

     Afisam vectorul dupa inserare
    cout << "Vector dupa inserare: ";
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
    
    return 0;



################

####




}
*/

#include <iostream>
using namespace std;
int main() 
{
    cout << "Vectorul final: ";
}