#include "fillit.h"

int is_equal(char *s1, char *s2) {
  if (strlen(s1) == strlen(s2)) {
    if (strcmp(s1, s2) == 0) {
      return 1;
    } else {
      return 0;
    }
  } else {
    return 0;
  }
}