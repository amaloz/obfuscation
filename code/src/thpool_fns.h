#ifndef THPOOL_FNS
#define THPOOL_FNS

#include "utils.h"

#include <aesrand.h>
#include <mife/mife_defs.h>

struct encode_elem_s {
    const mmap_vtable *vtable;
    const mmap_sk *sk;
    int n;
    fmpz_t *plaintext;
    int *group;
    mmap_enc *enc;
};

void *
thpool_encode_elem(void *vargs);

struct write_layer_s {
    const mmap_vtable *vtable;
    const char *dir;
    mmap_enc *zero;
    mmap_enc *one;
    long inp;
    long idx;
    long nrows;
    long ncols;
    double start;
};

void *
thpool_write_layer(void *vargs);

struct write_element_s {
    const char *dir;
    mmap_enc *elem;
    char *name;
};

void *
thpool_write_element(void *vargs);

#endif
