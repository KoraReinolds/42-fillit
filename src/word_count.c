#include "fillit.h"

int word_count(char *str, char c) {
    int i = 0;
    int word = 0;

    while (str[i] != '\0') {
        if (str[i] != c) {
            word++;
            while (str[i] != c) {
                i++;
                if (str[i] == '\0')
                    return word;
            }
        }
        i++;
    }
    return word;
}