// Tablouri patratice:

/*
    Este o matrice in care numarul de linii este egal cu numarul de coloane
    int n, A[100][100]

1. Diagonalele unei matrici

- Contine elementele unde linia == coloana
Exemplu: A[0][0], A[1][1]....

2. Diagnala secundara
- contine elementele une i + j = n - 1
exemplu: A[0][n-1], A[1][n-2],.....A[n-1][0]

3. Elementele desupara si sub diagonale
Fata de diagonala principala:
- Deasupra: i < j
- Sub: i > j

Fata de diagonala secundara:
- Deasupra: i + j < n - 1
- Sub: i + j > n - 1


4. Zonele delimitate de diagonalele principale și secundare (Nord, Sud, Est, Vest)

Ne imaginăm că matricea pătratică este împărțită în 4 zone între diagonala principală (i == j) și diagonala secundară (i + j == n - 1), astfel:

    Nord (sus) – deasupra ambelor diagonale
    Sud (jos) – sub ambele diagonale
    Vest (stânga) – între diagonala principală și cea secundară, în partea stângă
    Est (dreapta) – între cele două diagonale, în partea dreaptă

Reguli generale pentru poziționare (bazate pe i și j):
Zonă	 |         Condiție logică
Nord	 |      i < j și i + j < n - 1
Sud	     |      i > j și i + j > n - 1
Vest	 |      i > j și i + j < n - 1
Est	     |      i < j și i + j > n - 1

1. Scrieti un program care citeste o matrice patratica si calculeaza suma
lementelor de pe diagonala principala.

*/
/*
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    fstream fin("date.in");
    int n, A[100][100], suma = 0;
    int i, j;
    fin >> n;
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) {
            fin >> A[i][j];
        }
    }
    for ( i = 1; i <= n; i++) {
        suma += A[i][i];
    }
    cout << "Suma elementelor: " << suma << endl;


}*/

#include <iostream>
using namespace std;
int main()
{

    int n, a[100][100], i, j;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << " Matrice : ";

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
            cout << endl;
        }
        int suma = 0;

        for (i = 1; i < n; i += 2)
        {

            for (j = 0; j < n; j++)
            {

                suma += a[i][j];
            }
        }

        cout << "Suma : " << suma << endl;
    }
    return 0;
}