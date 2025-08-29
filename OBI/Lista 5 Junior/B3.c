#include <stdio.h>

int main(){
    int J, P, V, E, D;
    scanf("%d %d %d %d %d", &J, &P, &V, &E, &D);
    
    if (P == -1) {
        if (V != -1 && E != -1) {
            P = 3*V + E;
        }
    }
    if (J == -1) {
        if (V != -1 && E != -1 && D != -1) {
            J = V + E + D;
        }
    }
    if (V == -1) {
        if (P != -1 && E != -1) {
            V = (P - E) / 3;
        } else if (J != -1 && E != -1 && D != -1) {
            V = J - E - D;
        }
    }
    if (E == -1) {
        if (P != -1 && V != -1) {
            E = P - 3*V;
        } else if (J != -1 && V != -1 && D != -1) {
            E = J - V - D;
        }
    }
    if (D == -1) {
        if (J != -1 && V != -1 && E != -1) {
            D = J - V - E;
        }
    }
    if (J == -1) J = V + E + D;
    if (P == -1) P = 3*V + E;

    printf("%d %d %d %d %d\n", J, P, V, E, D);
    return 0;
}
