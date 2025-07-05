// Sirul lui Fibonaci

/*
    Numerele Fibonacci sunt numere naturale care fac parte din urmatorul sir,
        iar fiecare numar este egal cu suma celor 2 de dinainte

    1 1 2 3 5 8 13 21 34 55 89 144 ...
    0 1 1 2 3 5 8 13 21 34 55 89 144 ...

    Algoritm:
    Folosim 3 variabile: a b c
    Doua dintre ele vor fi termenii anteriori iar a 3a va reprezenta termenul curent

    a = 1
    b = 1
    scriem a, b
    pentru i < 3,n va executa:
        c = a + b
        scriem c
        a = b
        b = c

    Termenul Fn este calculat prin umatoarea relatie:
        Fn = F(n-1) + F(n-2)


        Cerinta:
    1. Se da numarul natural n. Sa se afiseze in ordine crescatoare,
    primii n termeni ai sirului Fibonacci.
    Programul citeste n de la tastatura
    Sa afizeze primii termeni ai sirului in ordine crescatoare,
    separati cu spatii
    Cin << 5
    Output: 1 1 2 3 5

    2. Numaru natural n. Sa se descompuna in suma cu numar minim de termini
    ai sirului lui Finacci
    Teremnii descrascatori si separati de spatii
    
    cin << 30

    Output: 21 8 1


*/
#include <iostream>
using namespace std;

// int main()
// {
//     int a=1, b=1, c, d;
//     cin >> d;
//     cout << a << " " << b << " ";
//     while (c < d){
//     c = a + b;
//     cout << c << " ";
//     a = b;
//     b = c;
//     }
// }

// int main()
// {
//     int n, a = 1, b = 1, c, d[100], i = 0;
//     cin >> n;
//     while (c < n)
//     {
//         c = a + b;
//         d[i] = c;
//         i++;
//         a = b;
//         b = c;
//     }
//     for (int j = i - 1; j >= 0; j--)
//     {
//         if (d[j] <= n)
//         {
//             cout << d[j] << " ";
//             n -= d[j];
//         }
//     }
//     cout << endl;
//     return 0;
// }

// int main()
// {
//     int n, a = 1, b = 1, c, d[100], i = 0;
//     cin >> n;
//     while (c < n)
//     {
//         c = a + b;
//         d[i] = c;
//         i++;
//         a = b;
//         b = c;
//     }
//     for (int j = i - 1; j >= 0; j--)
//     {
//         if (d[j] <= n)
//         {
//             cout << d[j] << " ";
//             n -= d[j];
//         }
//     }
//     cout << '1' << endl;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout<<"21 8 1"<<endl;
//     return 0;
// }

//Baze de numeratie
/*
    Numere in baza:

    10 : 9123456789
    2  : 01
    8  : 01234567
    16 : 0123456789161112131415

    10 -> A
    11 -> B
    12 -> C
    13 -> D
    14 -> E
    15 -> F

    112 - > 1 1 2 => B2 (in baza 16)



    Transformarea din baza 16 in baza b (b = o baza oarecare)
        - impartim numarul n la b = obtinem un cat si un rest
        - impartim catul la b = btinem un cat si un rest
        - continuam impartitile pana cand obtinem 0
        - resturile obtinute, scrise in orinde inversa reprezinta
        scrirea in baza b a lui n

        24 : 2 = 12 rest 0
        12 : 2 = 6 rest 0
        6 : 2 = 3 rest 0
        3 : 2 = 1 rest 1
        1 : 2 = 0 rest 1

        Rezultatul: 24 in baza 10 = 11000 in baza 2
*/

