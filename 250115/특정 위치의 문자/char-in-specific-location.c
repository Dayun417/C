#include <stdio.h>

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char n;
    int idx=-1;
    scanf("%c", &n);

    for(int i=0;i<6;i++) {
        if(word[i]==n) {
            idx=i;
        }
    }

    if(idx==-1) {
        printf("None\n");
    } else {
        printf("%d\n", idx);
    }

    return 0;
}