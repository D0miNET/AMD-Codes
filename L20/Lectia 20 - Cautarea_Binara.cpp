/*
    Cautare binara

    Este o metoda foarte eficienta de a cauta o valoare x intr—un vector ordonat crescator
    
    Cum functioneaza:
    1. Vectorul este ordonat crescator
    2. Pastram doua limite: st (stanga) si dr (dreapta)
    3. Calculam mijlocul: m = (st + dr) / 2
    4. Comparam v[] cu x:
        Daca sunte egale, l-am gasit
        Daca v[m] < x -> cautam in jumatatea dreapta (st = m + 1)
        Daca v[m] > x -> cautam in jumatatea stanga (dr = m - 1)
    Repetam pana st > dr

    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    int st = 1, dr = n, gasit = 0;
    while(st <= dr) {
        int mij = (st + dr) / 2;
        if(a[mij] == x) 
        {
            gasit = 1;
            break;
        }
        else if(a[mij] < x) 
        {
            st = mij + 1;
        }
        else
        {
            dr = mij — 1;
        }
    }

    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@





*/