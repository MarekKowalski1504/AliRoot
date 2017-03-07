#ifndef ALI_O2_COMPONENTS_VERTEX_CHI_SQUARED_H
#define ALI_O2_COMPONENTS_VERTEX_CHI_SQUARED_H
#include "Ids.h"
namespace ecs {
namespace vertex {
class ChiSquared {
  float mChiSquared;

public:
  ChiSquared(float ChiSquared) : mChiSquared(ChiSquared) {}
  ChiSquared() : mChiSquared(0) {}
  operator float() const { return mChiSquared; }
  float operator=(float other) {
    set(other);
    return other;
  }
  void set(float ChiSquared) { mChiSquared = ChiSquared; }
  static uint16_t Id() { return ids::Components::ChiSquared; }
};
}
}
#endif