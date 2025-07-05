//Secvente Escape

/*

Secventele escape sunt succesiuni de caractere care au alt inteles decat cel litearl
    atunci cand sunt folosite intr-un literal caracter sau sir de caractere.

Toate secventele ESCAPE incep cu caracterul \ - numit caracter escape
    De exemplu \n - secventa care reprezinta caracterul newline - trece la rand nou

De ce sunt necesare?
 Hamlet a spus
 A fi, sau a nu fi.

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
 // cout << "Hamelet a spus" "A fi, sau a nu fi"."; // eroare
    cout << "Hamlet a spus\"A fi, sau a nu fi.\".";
    cout << "Hamlet a spus\nA fi, sau a nu fi."<< "\a";


/*
Lista secventelor escape:
+-----------+-----------+---------------------+
| Secventa  | Cod ASCII | Caracter            |
+-----------+-----------+---------------------+
| \a        | 7         | Alerta, Beep        |
| \b        | 8         | Backspace           |
| \e        | 27        | Escape              |
| \f        | 12        | Formfeed            |
| \n        | 10        | New Line            |
| \r        | 13        | Carriage Return     |
| \t        | 9         | Tab orizontal       |
| \v        | 11        | Tab vertical        |
| \\        | 92        | Backslash           |
| \"        | 34        | Ghilimele           |
| \'        | 39        | Apostrof            |
| \?        | 63        | Semn intrebare      |
| \0        | 0         | Caracter nul        |
| \ddd      | Oricare   | Caracterul cu codul |
|           |           | octal ddd           |
+-----------+-----------+---------------------+
*/

//secventa                      caracter
// \a                           alerta, beep
    cout << "Alert \a" << endl; // va emite un sunet
// \b                           backspace
    cout << "Hello, Wor\bld" << endl; // se sterge "ld"
// \e                           escape
    cout << "Secventa escape:\e" << endl; // nu face nimic
// \f                           formfeed
    cout<< "Linia1\fLinia2" << endl; // se va afisa doar linia 2
// \n                           new line
    cout << "Linia1\nLinia2" << endl;
// \r                           carriage return
    cout << "12345\rABCDE" << endl; // ABCDE5
// \t                           tab orizontal
    cout << "Nume:\tIon" << endl; // Nume:  Ion
// \v                           tab vertical
    cout << "Linia1\vLinia 2" << endl; // Linia1
                                       // Linia 2
// \\                           backslash
    cout << "C:\\Program Files\\Microsoft" << endl; // C:\Program Files\Microsoft
// \"                           ghilimele
    cout << "Textul \"acesta\" este intre ghilimele" << endl; // Textul "acesta" este intre ghilimele
// \'                           apostrof
    cout << "Textul 'acesta' este intre apostrof" << endl; // Textul 'acesta' este intre apostrof
// \?                           semn intrebare
    cout << "Textul ?acesta? este intre semne de intrebare" << endl; // Textul ?acesta? este intre semne de intrebare
// \0                           caracter nul
    cout << "Textul \0acesta\0 este intre caractere nule" << endl; // Textul acesta este intre caractere nule
// \nnn                         caracterul cu codul octal nnn
    cout << "Caracterul cu codul octal 65 este: \101" << endl; // Caracterul cu codul octal 65 este: A
// \xhh                         caracterul cu codul hexazecimal hh
    cout << "Caracterul cu codul hexazecimal 41 este: \x41" << endl; // Caracterul cu codul hexazecimal 41 este: A

    return 0;
}