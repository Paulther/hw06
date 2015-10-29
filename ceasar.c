#include <stdio.h>
#include <string.h>

void caesar (int key, char message[]);

int main (void)
{
    char message[] =
        "Sp S rkn kcuon zoyzo grkd droi gkxdon droi gyevn rkfo cksn pkcdob rybcoc";

    for (int key = 0; key < 27; key++)
    {
        caesar (key, message);
    }

    return 0;
}

void caesar (int key, char message[])
{
    unsigned long j = strlen (message);
    char dcypher[150];

    for (unsigned long k = 0; k < j; k++)
    {
        if (message[k] != 32)
        {
            dcypher[k] = message[k] - key % 26;
            if (dcypher[k] < 97 && message[k] > 96)
            {
                dcypher[k] = dcypher[k] + 26;
            }
            else if (dcypher[k] < 65 && message[k] < 91)
            {
                dcypher[k] = dcypher[k] + 26;
            }
        }
        else
        {
            dcypher[k] = message[k];
        }
    }
    dcypher[j] = 32;
    printf ("%s\n", dcypher);
}
