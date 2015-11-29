#include <stdio.h>

void caesar (char message[], int key);

int main (void)
{

    char message[] =
        "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.";
    for (int key = 0; key < 26; key++)
    {
        caesar (message, key);
    }

    return 0;
}

void caesar (char message[], int key)
{
    int i = 0;

    while (message[i] != '\0')
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            char newletter = message[i] - 'A';

            newletter += key;
            newletter = newletter % 26;
            message[i] = newletter + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            char newletter = message[i] - 'a';

            newletter += key;
            newletter = newletter % 26;
            message[i] = newletter + 'a';
        }

        i++;
    }

    printf ("%s", message);
    printf ("\n");
}
