#include <stdio.h>
#include <string.h>

int main() {
    int a,i;
    char s[100];
    printf("Vui long nhap day so: ");
    scanf("%s", s);
    for ( i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            printf("Vui long nhap day so hop le.\n");
            return 1;
        }
    }
    for (i = 0; s[i] != '\0'; i++) {
        switch(s[i]) {
            case '0':
                printf("Khong ");
                break;
            case '1':
                printf("Mot ");
                break;
            case '2':
                printf("Hai ");
                break;
            case '3':
                printf("Ba ");
                break;
            case '4':
                printf("Bon ");
                break;
            case '5':
                printf("Nam ");
                break;
            case '6':
                printf("Sau ");
                break;
            case '7':
                printf("Bay ");
                break;
            case '8':
                printf("Tam ");
                break;
            case '9':
                printf("Chin ");
                break;
        }
    }
    
    return 0;
}
