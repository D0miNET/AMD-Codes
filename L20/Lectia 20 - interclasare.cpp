// Interclasare

/*
        Interclasarea a doi vectori ordonati crescatori inseamna combinarea lor intr-un singur vector,
        tot ordonat crescator, fara a pierde vreo valoare

        Explicatie:

        int a[] = {1, 4, 6}; // n = 3
        int b[] = {2, 3, 5}; // n = 3

        Vrem sa obtinem int c[] = {1, 2, 3, 4, 5, 6}; // p = n + m = 6

        int a[100000], n; // primul tablou
        int a[100000], n; // al doilea tablou
        int c[200000], p = 0; // tabloul rezultat
        
        Se Vitesc n, m, a[], b[] // nu aprea codu], presupunem

        lnterclasarea

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                c[p++] = a[i++];
            }
            else
            {
                c[p++] = b[j++];
            }
        }

        adaumgam ce a ramas

        while (i < n)
        {
            c[p++] = a[i++];
        }
        while (j < m)
        {
            c[p++] = b[j++];
        }

        Observatie:
        - Doar unul din cele 2 while-uri finale se execute complet, pentru ca doar unul din
        vectori mai are elemente de adaugat





*/