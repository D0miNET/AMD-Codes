
// Strcturi de control

// Stuctura liniara

/*

    Structura liniara sunt instructiunile care se executa la fiecare
        executie a programului, indiferent de valorile variabilelorl

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Instructiunea expresie
        //Instructiunea se termina cu ;

    // int x = 2;
    // cout << x; // Afiseaza 2

    // instructiunea declarativa

    // int c, y, z;
    // double a;

    /* Instructiunea compusa
        Este o grupaha de declaratii si instructiuni inchise intre
            acolade. Au fost intrdause cu scopul de a folosi mai
            multe istructiuni acolo unde sintaxa cere o singura
            instructiune

    */

    // int x = 2;

    // {
        // int x = 7;
        // cout << x <<endl; // Afiseaza 2
    // }

    // cout << x << endl; // Afiseaza 7

    /* Instructiunea return

            Permite iesirea dintro functie si transmiterea controlului
                apelantului functiei

    */

    /* Structuri alternative

        instructiunea if
            - este de tip bool
            - poate fi de 2 tipuri: if si if-else
            - nu folosim semicolon (;) la sfarsitul lui if(expr)
            - folosim acoladele pentru a grupa mai multe instructiuni
            - scriem ; dupa acolada de inchidere a instructiunii if

    */

    /*

    int numar;
    cout << "Introduceti un numar: "; cin >> numar;
    if (numar%2==0)
    {
        cout << numar << " - Numarul este par" << endl;
    }
    else
    {
        cout << numar << " - Numarul este impar" << endl;
    }

    */

    /*
    int n, m;
    cout << "Introduceti doua numere: "; cin >> n >> m;
    if (m==0 )
    {
        cout << "Impartirea la 0 nu este permisa!" << endl;
    }
    else
    {
        if (n%m==0)
        {
            cout << m << " divide pe " << n << endl;
        }
        else
        {
            cout << m << " nu divide pe " << n << endl;
        }
    }

    /*
        Instructionea switch

            - este de tip int
            - poate fi de 2 tipuri: switch si switch-case
    */
        /*
    int x;
    cout<<"x=";
    cin>>x;

    switch(x)
    {
    case 1:{
            cout<<"Luni";
            break;
            }
    case 2:{
            cout<<"Marti";
            break;
            }
    case 3:{
            cout<<"Miercuri";
            break;
            }
    case 4:{
            cout<<"Joi";
            break;
            }
    case 5:{
            cout<<"Vineri";
            break;
            }
    case 6:{
            cout<<"Sambata";
            break;
            }
    case 7:{
            cout<<"Duminica";
            break;
            }
  default :{
            cout<<"hopa a aparut o eroare mai incearca (s-ar putea sa nu existe ziua respectiva)";
            }
        }
        */
        /*
                Mod executie 
                - evalueaza expresia
                - daca vloanea expresie == una din valorile case, executa
                     instructiunile din grupul de instructiuni corespunzator
                - daca valoarea expresiei != cu niciuna verificata existenta
                    unei clauze default
                - daca nu exista nici default continua cu executia de dupa
                    switch

                - valonile din case trebuie sa fie constante intregi
                - grupurile de instructiuni pot sa fie N la numar
                - break; nu este obligatoriu, dar lipsa lui
                    modifica modul de executie
        */

        int zi;
        cout << "Introduceti o zi a saptamanii: "; cin >> zi;
        switch(zi)
        {
            case 1:
            cout << "Luni\n"; break;
            case 2:
            cout << "Marti\n"; break;
            case 3:
            cout << "Miercuri\n"; break;
            case 4:
            cout << "Joi\n"; break;
            case 5:
            cout << "Vineri\n"; break;
            case 6:
            cout << "Sambata\n"; break;
            case 7:
            cout << "Duminica\n"; break;
            default:
            cout << "Ziua introdusa nu exista!\n";
        }


    return 0;

}