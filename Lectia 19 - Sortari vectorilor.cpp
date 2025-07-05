/*
    Sortarea vectorilor

    Sortarea inseamna rearanjarea elementelor unui vector, astfel incat sa fie
    in ordine crescatoare sau descrescatoare

    Tipuri de algoritmi de sortare:

    1. Algoritmi neeficienti (mai lenti, folositi pentru invatare sau vectori mici)
    - Bubble sort - compara elementele 2 cate 2 si le inverseaza daca e nevoie
    - Selection sort - cauta elementul minim si il pune pe prima pozitie
    - Inseration sort - ia elementul unul cate unul si le inser‘eaza in locul potrivit
    - Gnome sort - asemenator cu inseration, dar folosete o metoda mai simpla si
                    repetitiva de comparare si interschimbare

    2. Algoritmi eficienti (mai rapizi, folositi in practica)
        - QuickSort
        - MergeSort
        - HeapSort

    3. Algoritmi specializati (pentru unele cazuri special se pot folosi algoritmi cu complexicate liniara)
        -CoutingSort
        -Radix Sort
        -Bucket Sort

    4. Algortimi exponentiali
        - algoritmi cu complexitate foarte mare, nu sunt utilizati in practica pentru ca sunt prea lenti.

*/

/*
    Bubble sort
    Ideea de baza:

    l. X[n]
    2. Comparam fiecare pereche de elemente alaturate
    3. Daca nu sunt in ordinea dorita (deobicei crescatoare), le interschimbam
    4. Repetam acesata aprcurgere de mai mult eori
    5. Cand nu mai are 10c nicio interschimbare intr—o parcurgere, insemana ca vectorul este sortat

    int n, v[100];
    bool sortat;
    do{
            sortat = true;
            for (int i = 0 ; i < n - 1; i++)
            if(v[i] > v[i+1])
            {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
            sortart : false;
        }
    }while(!sortat);



    Selection sort
    Este un algoritm simplu de sorate care functioneaza prin selectarea repetat a celui mai mic
    element si plasarea lui pe pozitia corecta din vector

    1. X[n]
    2. Cautam cel mai element din vector si il punem pe prima pozitie
    3. cautam urmatorul cel mai mic si il pune pe pozitia aza, etc
    4. Repetam procesul pana cand vectorul este complet sortat

    Exemplu:

    {52413} → {25413} → {24513} → {24153} → {24135} → {21435} → {21345} → {12345}

    int n, X[100]
    for (int i = 0; i < n-1; i++)
        for(int j = i + 1; j < n; j++)
            if(X[i] > X[j])
            {
                int aux = X[i];
                X[i] = X[j];
                X[j] = aux;
            }

    Insertion sort
    Ideea de baza:

    1. X[n]
    2. consideram ca primul element este deja sortat
    3. Incepand cu i = 1, inseram fiecare element in secventa ordonata din stanga astfel incat
        sa pastram ordinea
    4. Pentru a insera corect, mutam elementele mai mari catre dreapta ca sa facem loc

    Exemplu:

    {74526} -> {47526} —> {45726} —>

    1. i z 1 -> vrem sa inseram 4 in secventa 7 -> 4 < 7 -> mutam la dreapta -> 7 7 -> apoi
    inseram 4 -> 4 7
    2. i = 2 —> vrem sa inseram S in secventa 4 7 -> S < 7 -> mutam la dreapta -> 4 7 7 -> apoi
    inseram 4 -> 4 5 7
    3. 2 -> 457 -> 2
    4. 6

    int n, a[l00];
        for(int i = 1; i < n ; i++)
        {
            int x = a[i]; // elementul de inserat
            int p = i —1;
            while(p >= 6 && a[p] > x)
            {
                a[p+1] = a[P]3 // mutam elementele mai mari
                    p--;
            }
                a[p+1] = x; // inseram elentul pe pozitia corecta
        }









*/
