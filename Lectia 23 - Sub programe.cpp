// Subprograme
/*
    - este o secventa de cod care indeplineste o anumita sarcina.
    - il scriem 0 data si il putem folosi ori de cate ori e nevoie, printr-un apel

Exemple de folosite

Problema 1:
Se dau doua numere. Aflati suma dintre oglinditul celor doua.

123 = 321
Fara un subprogram ar trebui sa scriem de doua ori acelasi cod pentru a calcula

Cu subprogram:
- scrieti o functie oglindit(nr)
- o apelam de doua ori: oglindit(n) si oglindit(m)
- adunam rezultatele

Problema 2:

Sa se citeasca un tablou cu n elemente, numere intregi.
Ordati crescator elementele si apoi afisati-le.

citire
sortare
afisare


*/

// #include <iostream>
// using namespace std;

// int oglindit(int n)
// {
//     int oglindit = 0;
//     while (n > 0)
//     {
//         oglindit = oglindit * 10 + n % 10;
//         n /= 10;
//     }
//     return oglindit;
// }

// int main()
// {
//     int n, m;
//     cout << "Introduceti doua numere: ";
//     cin >> n >> m;

//     int oglindit_n = oglindit(n);
//     int oglindit_m = oglindit(m);

//     cout << "Suma dintre oglinditele celor doua numere este: " << oglindit_n + oglindit_m << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void citire(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }

// void sortare(int a[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
// }

// void afisare(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout << "Introduceti numarul de elemente: ";
//     cin >> n;

//     int a[100];
//     cout << "Introduceti elementele: ";
//     citire(a, n);
//     sortare(a, n);
//     cout << "Elementele ordonate crescator sunt: ";
//     afisare(a,n);

//     return 0;
// }

/*
Anatomia unei functii

int ogl(int x)
{
    int r = 0;
    do {
    P = 10 * r + x % 10
    x /= 10;
    } while(x != 0);
    return r;
}

1. Antentul funtiei
int ogl(int x)
- int - functia returneaza un numar intreg
- ogl - numele functiei
- (int x)   - primeste un numar intreg ca si parametru(x)
            - acest parametru se numeste parametru formal

2. Corpul functiei
    int r = 0;
    do {
        r = 10 * r + x % 10;
        x /= 10;
    } while(x != 0);
    return r;
- r - este o variabila locala: exista doar in interiorul functiei
- return r - functia de intoarcere a rezulatatului programului

3. Apelul functiei
ogl(n)
- cand o apelam, ii dam un parametru actual (de exemplu n)
- functia preia valoarea n, calculeaza oglinditul si returneaza rezultatul
- rezultatul este stocat intr-o variabila (de exemplu oglindit_n)


Problema 2:

void citire()
void sortare()
void afisare()

void — nu returneaza nimic

Definirea si declararea unei functii:

- in c++ nu putem folosi ceva inainte sa il declaram
- variabile
- functii


Diferenta dintre definire si declarare

1. Definirea Functiei
    - scriem tot codul functiei: antet + corp

2. Declararea Functiei
- anunti existenta functiei dar fara corpul ei
- spunem compilatorului ca functia exista, dar nu dam detalii despre cum functioneaza
- se face de obicei la inceputul fisierului
- antetul functiei este suficient

Problema:
Se dau doua numere naturale. Sa se afiseze suma dintre oglinditul primului numar
si dublul celui de-al doilea.

*/

#include <iostream>
using namespace std;

int oglindit(int n) {
    int ogl = 0;
    while (n > 0) {
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    return ogl;
}

int dublu(int n) {
    return 2 * n;
}

int main() {
    int n, m;
    cout << "Introduceti doua numere: "; cin >> n >> m;
    cout << "Suma: " << oglindit(n) + dublu(m) << endl;

    return 0;
}
