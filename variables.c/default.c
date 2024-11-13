
#include <stdio.h>

void sayname1(const char *fname, const char *lname) {
    printf("My name is: %s %s\n", fname, lname);
}

void sayname2(const char *fname) {
    sayname1(fname, "");  // Equivalent to missing 'lname'
}

void sayname3() {
    sayname1("ankit", "");  // Equivalent to both defaults
}

int main() {
    sayname2("akash");                  // Equivalent to: sayname("akash");
    sayname1("akash", "surya");          // Equivalent to: sayname("akash", "surya");
    sayname1("akash", "");               // Equivalent to: sayname(fname);
    sayname1("akash", "kumar");          // Equivalent to: sayname("akash", "kumar");
    return 0;
}
