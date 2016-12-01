#ifndef BASEFUNCTIONS_H
#define BASEFUNCTIONS_H

typedef float (*base_func)(float, float);
base_func getBaseFunction(unsigned char func);

typedef float (*filter_func)(unsigned int, float, float);
filter_func getFilter(unsigned char func);

float normalOfBaseFunction(unsigned char func,
    int oscilsize, unsigned char basefuncpar);

#endif // BASEFUNCTIONS_H
