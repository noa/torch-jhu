#ifndef JHNN_H
#define JHNN_H

#include <stdbool.h>
#include <TH.h>
#ifdef _OPENMP
#include <omp.h>
#endif

#define JHNN_(NAME) TH_CONCAT_3(JHNN_, Real, NAME)

#define THIndexTensor THLongTensor
#define THIndexTensor_(NAME) THLongTensor_ ## NAME

#define THIntegerTensor THIntTensor
#define THIntegerTensor_(NAME) THIntTensor_ ## NAME

typedef long THIndex_t;
typedef int THInteger_t;
typedef void JHNNState;

#include "generic/JHNN.h"
#include <THGenerateFloatTypes.h>

#endif
