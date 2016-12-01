#ifndef WAVENORMALS_H
#define WAVENORMALS_H

//! returns an array:
//! basefunc i with parameter j is in array [i-1][j<<2]
//! all values in between are for parameters between two ints
const float (*getWavenormals())[512];

#endif // WAVENORMALS_H
