#include <stdio.h>

int main() {
    char sentence[100];
    printf("Lutfen bir cumle giriniz:");
    gets(sentence);
    int i, k, j = 0; // j: bosluklarin indeksleri

    for (i = 0; sentence[i] != '\0'; i++) {

        if (sentence[i] == ' ' || sentence[i + 1] == '\0') {
            // bosluk gorunce ya da cumlenin sonuna gelince bosluktan geriye kelimeyi yazdirmak icin

            for (k = i; k >= j; k--) { // kelimeyi tersten yazdirmak icin
                printf("%c", sentence[k]);
            }
            j = i; //bosluk indeksini guncellemek icin
        }
    }


    return 0;
}
