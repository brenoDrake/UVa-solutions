#include<cstdio>
 
bool eh_letra(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
 
bool eh_vogal(char c) {
    return c == 'a' || c == 'A' ||
        c == 'e' || c == 'E' ||
        c == 'i' || c == 'I' ||
        c == 'o' || c == 'O' ||
        c == 'u' || c == 'U';
}
 
int main() {
	char c, s;

    while((c = getchar()) != EOF) 
{
        if(eh_letra(c)) {
            s = c;
            if(!eh_vogal(c)) {
                while(eh_letra((c = getchar())))
                    printf("%c", c);
                if(c != '\n')
                    printf("%cay", s);
            } else {
                printf("%c", c);
                while(eh_letra((c = getchar())))
                    printf("%c", c);
                if(c != '\n')
                    printf("ay");
            }
        }

        printf("%c", c);
    }
}
