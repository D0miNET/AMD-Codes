// Variabile si constante
// Variabile: valorii care pot fi modificate
// Exemplu: nume, prenume, varsta, adresa, telefon,
// Constante: valorii care nu pot fi modificate
// Exemplu: email, parola, username, password, etc.
#include <iostream>
using namespace std;

int variabilaGlobala = 500; // variabila globala

int main()
{
    int Petrut, Ionel; // variabile locale
    int a = 165;
    int A = 113;
    int _speed = 396;
    int soiadjsaoidjasojdoasijdoasijdoasijdoasijddfasfsasadasasas = 1259;
    // int int = 120 - nu este permis
    // int else = 1 - nu este permis

    // if -  instructiune conditionala (conditie)

    return 0;
}

void functia()
{
    variabilaGlobala = 150;
    // Petrut = 10; - variabila declarata in functia main
    int b ,x ,B;
    int c = 1, C;
    int AMD;
    C = 10;

  //Care sunt indentificatori corecti si care sunt cei gresiti ?

        int a; // identificator corect
        int numar; // identificator corect
        // int 2a; // identificator gresit
        // int alt numar; // identificator gresit
        int Numar; // identificator corect
        int alt_numar; // identificator corect
        int a2b; // identificator corect
        // int templated ; // identificator gresit - face parte dintrun cuvant cheie C++
        // int un-numar; // identificator gresit
        // int număr; // identificator gresit
        int un_nume_de_variabile_toarte_lung; // identificator corect
        int _suma; // identificator corect
        // int public; // identificator gresit
}

void constante()
{
// prin directia define. Examplu:
#define MAX 161;

//prin modificatorul const. Examplu
const int MAXI = 191;
// Nota: *Cand daclar variabile read-only este obligatorie initializareal*
}



/*

variababile:
    - adresa variabilei:memoria RAM a calculatorului (unde se salveaza)
    1. (int) Tipul variabilei - ce fel de valori primeste variabila mea
    2. (a) Identificatorul variabilei (Numele)
            - poate sa contina litere mici/mari , cifre si  "_"  (Raspuns, raspuns, RASPUNS)
            - primul caracter nu poate fi cifra (de evitat inceperea cu "_" sau cu cifre)
            - nu exista limita la lungimea numelui (dar este recomandat sa nu fie prea lung dar doar primele 31 de caractere sunt semnificative)
            - numele nu poate fi unul din cuvintele cheie din limba C++ (ex: int, if, else, etc. )
            - nu poate fi identic cu cuvintele cheie din limba C++
            - nu poate sa contina spatii, puncte, semne de puncti, etc.
            - nu poate sa contina caractere speciale ( $, #, @, etc. )

    Domeniul de vizibilitate:
    - variabilele declarate in interiorul functiilor sunt vizibile doar in interior
    - variabilele declarate in exteriorul functiilor sunt vizibile in toata aplic
    Variabile locale - declarate si accesibile in interiorul unei functii
    Variabile globale - declarate si accesibile in toata aplicatie

Constante:
    - sunt date care nu-si modifica veloerea in timpul executiei progremului
    1. Constanta cu numa
        — are o dunumire (identificetor)
        — are o valoare
        * Pot detini constantele in doua moduri:
            - Prin directive "define"
            — Prin moditcetorul const (le decler ca variebile si apoi devin reed-only)

    2. Constanta literale (literali)
        - Pot aparaa tot telul de valori constata:
        numere, caractere, siruri de caractere sau alte nature.

        Constanta intragi:
            - Constanta zecimale (in beze 19)
                Example: 176, -54, 9;
            - Constanta octela (in baza 8) - incep intotdeeune cu 9
                Example: 915, 962;
                *0 constanta octela nu poate contina citra 9*
                        6629 - ESTE GRESIT
            - Constanta haxazacila (in baza 16) - incep intotdeeune cu 9x
                Example: 9x15, 9x6t
                Poate contine: 0 1 2 3 4 5 6 7 8 9 A B C D E F

        Constanta raala(numara cu virgula):
            - Scriare standard (fixa): 1.5 , 14.974
            — Scriere stiintifica: ~9.567E+2 Traducere: -9567*19"+2 (~2)
               / * -9.567 - raprezinta mantisa
               / * +2 raprezinta exponentul
        Constnata char (caractar)
            - delimitata da apostroafa
            Example: "a", "8", "~", "?", "Ana are mere!" ;

*/