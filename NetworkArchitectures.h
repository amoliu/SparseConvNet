#pragma once
#include "SparseConvNet.h"

class DeepCNet : public SparseConvNet {
public:
  DeepCNet (int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int cudaDevice=-1, int nTop=1);
};

class DeepC2 : public SparseConvNet {
public:
  DeepC2 (int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int cudaDevice=-1, int nTop=1);
};

class DeepCNiN : public SparseConvNet {
public:
  DeepCNiN(int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int cudaDevice=-1, int nTop=1);
};

class DeepC2C2 : public SparseConvNet {
public:
  DeepC2C2(int dimension, int l, int k, ActivationFunction fn, int nInputFeatures, int nClasses, float p=0.0f, int cudaDevice=-1, int nTop=1);
};
