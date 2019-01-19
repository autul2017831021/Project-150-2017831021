#include<stdio.h>
    #include<string.h>
    #include<algorithm>
    using namespace std;
    int main()
    {
        int a[30],i,n,t,c=0,k;
        scanf ("%d", &t);
        while (t--)
        {
            scanf ("%d%d", &n, &k);
            for (i=0;i<n;i++)
            a[i] = i;
            printf ("Case %d:n", ++c);
            while (k--)
            {
                for (i=0;i<n;i++)
                printf ("%c", a[i]+'A');
                printf ("n");
                if(!next_permutation (a,a+n))
                break;
            }
        }
        return 0;
    }
