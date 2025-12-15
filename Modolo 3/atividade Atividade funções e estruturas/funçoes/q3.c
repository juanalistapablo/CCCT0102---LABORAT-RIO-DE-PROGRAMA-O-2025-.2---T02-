#include <stdio.h>

int String_Iguais(char str1[], char str2[]) {
    int i = 0;
    
    while (str1[i] != '\0' || str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];

        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }

        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }

        if (c1 != c2) {
            return 0;
        }
        i++;
    }

    return 1;
}

int main() {
    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    scanf("%s", s1);
    printf("Digite a segunda string: ");
    scanf("%s", s2);

    if (String_Iguais(s1, s2)) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
