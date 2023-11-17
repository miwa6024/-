#include<stdio.h>

int main(void) {

    /* 文字 */
    char a;
    printf("文字を入力してください");
    scanf_s("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("大文字が含まれる\n");
    }
    else if (a >= 'a' && a <= 'z') {
        printf("大文字が含まれません\n");
    }
    else {
        printf("その他の文字");
    }

    return 0;
}
