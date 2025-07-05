// Divizibilitate

/*
    Un numar este divizibil cu altul atunci cand restul impartirii este 0

    Daca n divide pe m, spunem ca n este divizorul lui m,
    iar m este multipul al lui n
*/

#include <iostream>
using namespace std;

int main()
{
    // Algoritmul naiv
    /*
    Prima metoda de determinare a divizorilor
    Verific daca divizorii lui n se afla intre 1 si n
    Parcurgem numerele din intervFal si le verificam daca sunt divizori au lui n
    iar in acest caz sunt luati in considerare
    */

    // int n;
    // cin >> n;
    // for (int d = 1; d <= n; d++)
    // {
    //     if (n % d == 0)
    //     {
    //         cout << d << ' ';
    //     }
    // }
    // return 0;

    // Algoritmul optimizat
    /*
        Pentru a constata mai eficient determinarea divizorilor lui n, putem
        sa parcurgem numerele de la 1 la radical din n
    */

    // int n;
    // cin >> n;
    // for (int d = 1; d <= n; d++)
    // {
    //     if (n % d == 0)
    //     {
    //         cout << d << ' ';
    //         if(d * d <= n)
    //         {
    //             cout << n / d << ' ';
    //         }
    //     }
    // }

    /*
        Am evitat utilizarea functiei sqrt si am preferear o forma
        echivalenta d * d <= n , si mai eficienta.
    */

    // algoritmul lui Euclid (CMMDC si CMMMC)
    /*
        Avem a si b, doua numere naturale. Un numar natural d
        se numeste CEL MAI MARE DIVIZOR COMUN (CMMDC) al lui a si b
        daca indeplineste conditiile:

        1. d|a si d|b
        2. c|a si c|b atunci c|d

        In matematica pentru a gasi cmmdc ale doua numere folisim descompunerea
        in Factori primi. In schimb exista o solutie mai simpla de implementat
        intr-un program, numita "Algoritmul lui Euclid"
    */

    // Algoritmul lui Euckid cu scaderi
    /*
            - cat timp numere sunt diferite, se scade numaul mai mic din cel mare
            - cand numerele sunt egale, valoarea comnuna este mai mare divizor comun
            - algorimul nu poate fi aplicat daca unul din numere este 0

        n = 32 si m = 24
        32 - 24 = 8
        n = 8 si m = 24
        24 - 8 = 16
        n = 8 si m = 16
        16 - 8 = 8
        n = 8 si m = 8
        Valorile sunt egale. Valorea comuna este 8 si este si cel mai mare
        divizor comun a1 valorilor intiale n = 32 si m = 24
    */

    // int n, m;
    // cin >> n >> m;
    // while (n != m)
    // {
    //     if (n > m)
    //     {
    //         n -= m;
    //     }
    //     else
    //     {
    //         m -= n;
    //     }
    // }
    // cout << n;

    /*
        cat timp m != 0
            - determinam restul impartii lui n la m
            - n devine m iar m devine restul calculat
        valoarea actuala a lui n este cel mai mare divizor comun

    n = 32 si m = 24
    m !=0
        r = n % m = 8
        n devine m iar m devine r
    n = 24 si m = 8
    m != 0
        r = n % m = 0
        n devine m iar m devine r
    n = 8 si m = 0
    m = 0 si valoarea actuala a lui n = 8, atunci 8 este cmmdc a lui 32 si 24

    */

    int n, m, r;
    cin >> n >> m;
    while (m != 0)
    {
        r = n % m;
        n = m;
        m = r;
    }
    cout << n;


    return 0;
}