#include <stdlib.h>


/*
 * @pre  - 
 * @post - 
 */
double* solve(double** syst, double* b){
    /* Looking if the array has the same number of rows than columns */
    if(sizeof(syst[0]) != sizeof(syst)/sizeof(syst[0])){
        return NULL;
    }
    double* rep = malloc(sizeof(syst[0]));
    if(rep == NULL) return NULL;
    
    int j;
    for(j=0; j<sizeof(syst[0]); j++){
        rep[j] = (double) j*3;
    }
    return rep;
}