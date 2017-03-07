#ifndef ALI_O2_COMPONENSigmaS_VERTEX_SIGMA_H
#define ALI_O2_COMPONENSigmaS_VERTEX_SIGMA_H
#include "Ids.h"
namespace ecs {
namespace vertex {
class Sigma {
  float mSigma;

public:
  Sigma(float Sigma) : mSigma(Sigma) {}
  Sigma() : mSigma(0) {}
  operator float() const { return mSigma; }
  float operator=(float other) {
    set(other);
    return other;
  }
  void set(float Sigma) { mSigma = Sigma; }
  static uint16_t Id() { return ids::Components::Sigma; }
};
}
}
#endif