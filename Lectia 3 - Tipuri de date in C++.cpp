//Tipuri de date in C++ ;
/*
Ce este un tip de date?
— orice data (o variabila sau o constanta) este de un anumit tip
— tipul unei variabile este definit la momentul declararii ei
- tipul date precizaeaza ce valori poate avea acea data si ce se poate face cu ea

1. Tipuri simple
    - int
    - float
    - double
    - char
    - pointer
    - bool
    - void

2. Tipuri derivate
    - tablou
    -structure/alas
    - enumerare

*/


#include <iostream>
using namespace std;

int main()
{

/*
Tipul de date INT

permite memorarea de valori intregi (pozitive sau negative)
int ocupa 4 octeti (putem folosi int pentru valori ce nu depasesc 2.000.000.000)
*/
    int variabila = 19;
    int A = -1;
    // int 8 = 2^31;
/*
Tipul de date FLOAT si DOUBLE (Tipuri cu virgula mobilă)

    - memoreaza numere reale (virgula)
    - separatorul zecimal este . (punct)
    - datele pot fi in forma fixa sau in forma stiitifica (exponentiala)
    - float ocupa 4 octeti (32 biti) 3.4 * 10^38
    - doueble ocupa 8 octeti (64 biti) 1.8 * 10^308

*/

float p = 3.14, r = 2.5;
double x = 1.24E+07; // inseamna 1.24 * 10^7
double B = p * r * r;

/*
Tipul de date CHAR
    - permite memorarea de caractere (litera, cifre, simboluri)
    - ocupa 1 octet (8 biti)
    - se foloseste pentru caracterele ASCII (American Standard Code for Information Interchange)
    - se foloseste pentru caracterele Unicode (Universal Character Set)
    - stocheaza un singur caracter (ex. 'a', 'A', '1', '!', etc.)
    - careacterele se delimiteaza cu apostroafele ''
*/

char c = 'A'; // nu memoreaza caracterul, ci un numar corespunzator caracteruluiq

/*
Tipuri de date POINTER
    - permite memorarea de adrese de memorie
    - pointerul este o variabila care stocheaza adresa unei alte variabile
    - se foloseste pentru a accesa o variabila din memoria computerului
    !!! Nu confundati adresa uncei variabile cu valoarea memorata de aceasta !!!
    - La declararea unei variabile de tip pointer se precizeaza tipul variabilei
*/

int * p;
double * f;
float *x, *s;

/*
Tipul bool (boolean)
    - contine doua valoti: True si false;
    - ocupa 1 octet (8 biti)
    - valorile numerice sunt 1 si 0;
    - se folosesc in instructiuni conditionale si repetitive
*/

bool pp = false;

/*
Tipul VOID
    - void inseamna "nimic","fara valoare" sau "nici un tip de date"
    - datele de tip void nu au valori si nu se pot face operatii cu ele
    - i1 folosim DOAR pentru functii si pointeri
    - NU putem declara variabile de tip VOID
*/

void metoda(); // nu returneaza nici o valoarea la executia programului
{
    int x, *p;
    cout << & x; // adresa
    p = & x;
    cout << p; // aceeasi adresa ca mai sus
}


}

int pointer()
{
/*
    Adresa unei variabile poate fi determinate cu ajutorul operatorului
        de referinta "&"
*/

    int x, *p;
    cout<< & x; // adresa
    p = & x;
    cout<< p; // aceeasi adresa ca mai sus

}

/*
Modificatori de tip
    - permit schimbarea modului in care se face reprezentarea intera a unei date
    - sunt ca niste "adejctive" pe care le adaugam tipurilor de date
    - ii spunem limbajului C++:
                                - cat de mare sa fie numarul pe care il stocam
                                — daca numarul poate fi negativ sau doar pozitiv
    Tipurile sunt:
    - signed
    - unsigned
    - short
    —long
        Pot fi aplicati tipurile:
            - int
            - double
            - char

*/

int modificatoriTip()
{

    // Signed - numere intregi care sunt pozitive si negative
    signed int P = 100;
    int X = -20032;

    // Unsigned - numere intregi care sunt doar pozitive
    unsigned int numar = 30;

    // Short - numere intregi MICI pozitive si negative
    short int mar = 32000; // maxiul este de -32767 -> 32767

    // Long - numere intregi mari pozitive si negative
    long int num = 2000000000;

}