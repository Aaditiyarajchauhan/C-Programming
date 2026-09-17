#include <stdio.h>

//      THAT NOT WORKS 

void modifyValue(int x) {
    x = 100; // Changes only the local copy that change only in this scope only
}
int main() {
    int num = 50;
    modifyValue(num); // Passing a copy of 'num'
    printf("%d\n", num); // Outputs: 50 (Original variable is unchanged)
    return 0;
}


/*
        THAT WORKS

int modifyValue(int x) {
    x = 100;
    return x;
}

int main() {
    int num=modifyValue(50); 
    printf("%d\n", num);
    return 0;
}
*/