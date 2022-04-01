#include<stdio.h>
#include<string.h>
int main() {
    char text[50];
    char pattern[4];
    printf("Enter the text\n");
    scanf("%s", text);
    printf("Enter the pattern\n");
    scanf("%s", pattern);
    int lenT = strlen(text);
    int lenP = strlen(pattern);
    int pos = match(text, pattern);
    if(pos != -1)
        printf("%d", pos);

        else
            printf("NOTFOUND");
    return 0;
}

int match(char text[], char pattern[]) {
    int c, d, e, textLen, patternLen, pos = -1;
    textLen = strlen(text);
    patternLen = strlen(pattern);
    if(patternLen > textLen) {
        return -1;
    }

    for(c = 0; c <= textLen - patternLen; c++) {
        pos = e = c;
        for(d  =0; d < patternLen; d++) {
            if(pattern[d] == text[e])
            e++;
            else
            break;
        }
        if(d == patternLen)
        return pos;
    }
}
 