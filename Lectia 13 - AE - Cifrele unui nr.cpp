// Cifrele unui numar

/*
    Cand scirem un numar, spre deosebire de cum ne
    gandim noi practic la el ca si o insiruire
    de nr, programul meu il trateaza ca o singura
    entitate. Este memorat si accesat in memorie ca
    o valoare, nu ca si o insiruire de cifre.

    Pentru a determina cifrele unui nr trebuie sa
    folosim o anumite operatii

*/

#include <iostream>
using namespace std;

int main()
{


    /*
        - numar natural de tip integer
        - cum pot determina cifrele acestui numar?
        - pentru a determina ficare cifra folosim operatii aritmetice

    */

//    int n = 274;

    // cout << n % 10 << endl; // ‘Folosind modulo determinam ultima cifra a lui n

    // cout << n % 100 / 10 << endl; // daca operanzii sunt intregi,
    // operatia "/" reprezinta catul impartiii intregi

//    cout << n % 10; // se va afisa 4
//    n = n / 10;     // n devine 27
//    cout << n % 10; // devine 7

    /*
        Numim TRUNCHIERE operatia prin care se elimina ultima cifra a valorii
        unei variabile intregi.

        Cum aflam cifra sutelor?
            Trunchiem inca o data valoarea lui si astfel n devine 2 iar
            n % 10 devine 2
            Dupa a2a trunchiere n are singura cifra, si printr-o noua trunchiere
            n devine 0

        Concluzie:
            - ultima cifra a lui n este n % 10
            - prin trunchiere se elimina ultima cifra a lui n
            - prin trunchiere succesiva valoare lui n devine 0

    */

//    int n;
//    cin >> n;
//    while( n != 9 ) // cat timp n este nenul
//    {
//        int uc = n % 10; // determinam ultima cifra a lui n
//        cout << uc << " "; //prelucram ultima cifra
//        n /= 10; // eliminam ultima cifra, trunchiem n
//    }

    /*
        Enunt: 
        - se da un nr natural n.
        - sa se calculeze suma cifrelor lui n.

        Rezolvare:
        - fie n nr dat si s variabila in care 
        vom calcula noi suma cifrelor.
    */



//    int nr,s,uc;
//    cout<<"Introduceti un nr natural: ";
//    cin>>nr; // 423
//    s = 0;
//    while (n!=0)
//    {
//        uc = n % 10;
//        s += uc;
//        n /= 10;
//    }
//    cout<<"Suma cifrelor este: "<<s<<endl;

    /*
        Enunt:
        - se da un nr natural n.
        - sa se modifice acest nr micsorand cu cate o unitate fiecare cifra impara.
        daca nr este 379 => 268
    
    */
/*
    int nr,uc,s,inv,nr2,inv2,uc2;
    cout<<"Introduceti un nr natural: ";
    cin>>nr; // 379
    s = 0;inv = 0;
    while (nr!=0) //sau (nr>=0)
    {
        uc = nr % 10;
        if (uc % 2 == 1)
        {
            uc -= 1;
        }
        inv = inv * 10 + uc;
        nr /= 10;
    }
    nr2 = inv;
    inv2 = 0;
    while (nr2!=0)
    {
        uc2 = nr2 % 10;
        inv2 = inv2 * 10 + uc2;
        nr2 /= 10;
    }
    cout<<"Numarul modificat este: ";
    cout<<inv2<<endl; // 268
*/
    int nr,uc,s,inv,nr2,inv2,uc2;
    cout<<"Introduceti un nr natural: ";
    cin>>nr; // 379
    s = 0;inv = 0;
    while (nr>=0) //sau (nr=>0)
    {
        uc = nr % 10;
        if (uc % 2 == 1)
        {
            uc -= 1;
        }
        inv = inv * 10 + uc;
        nr /= 10;
    }
    nr2 = inv;
    inv2 = 0;
    while (nr2>=0)
    {
        uc2 = nr2 % 10;
        inv2 = inv2 * 10 + uc2;
        nr2 /= 10;
    }
    cout<<"Numarul modificat este: ";
    cout<<inv2<<endl; // 268




/// palindrom 
//    int nr,uc,s;
//    cout<<"Introduceti un nr natural: ";
//    cin>>nr; // 12321
//    s = 0;
//    while (nr!=0)
//    {
//        uc = nr % 10;
//        s = s * 10 + uc; // 1 12 123 1234
//        nr /= 10;
//    }
//    cout<<"Numarul modificat este: ";
//    cout<<s<<endl; // 12321

   

    return 0;
}