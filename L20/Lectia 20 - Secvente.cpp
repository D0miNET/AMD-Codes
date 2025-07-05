/*
    Secvente in vectori

    O secventa reprezinta o serie de elemente consecutive dintr—un vector, in ordinea lor.

    Exemplu:
    x[] = {10, 20, 30, 40, 50}

    Secvente valide:
    - {10}
    - {30, 40}
    - {10, 20, 30, 40, 50}

    nu sunt secvente:
    - {10, 30} (nu sunt consecutive)
    - {10, 20, 99} (nu apar toate in vector)

    Cate secvente are un vector cu n elemente?

    Fomrula totala : n(n+1)/2

    Exemplu: n = 3
    1. 1:3
    2. 2:2
    3. 3:1
    Total 3 + 2 + 1 = 6

    Gasirea celei mai lungi secvente cu 0 proprietate
    Ex: cea mai lunga secventa cu numere impare
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n[] = {1, 3, 5, 2, 7, 9, 11, 4, 13, 15};

//     int lc = 0;
//     int lm = 0;
//     int si = -1;
//     int ei = -1;

//     for (int i = 0; i < 10; ++i)
//     {
//         if (n[i] % 2 != 0)
//         {
//             lc++;
//             if (lc > lm)
//             {
//                 lm = lc;
//                 ei = i;
//                 si = i - lm + 1;
//             }
//         }
//         else
//             lc = 0;
//     }

//     cout << "Sirul: ";
//     for (int i = 0; i < 10; ++i)
//     {
//         cout << n[i] << " ";
//     }
//     cout << endl;

//     if (lm > 0)
//     {
//         cout << "Cea mai lunga secventa are lungimea: " << lm << endl;
//         cout << "Start: " << si << ", Sfarsit: " << ei << endl;
//         cout << "Secventa: ";
//         for (int i = si; i <= ei; ++i)
//         {
//             cout << n[i] << (i == ei ? "" : ", ");
//         }
//         cout << endl;
//     }
//     else
//     {
//         cout << "Nu s-a gasit nicio secventa." << endl;
//     }

//     return 0;
// }
