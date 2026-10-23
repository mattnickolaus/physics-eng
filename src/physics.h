#ifndef PHYSICS_H_
#define PHYSICS_H_

#include <math.h>
// Uses:  sqrtf()

#ifdef PHYSICS_IMPLEMENTATION
#undef PHYSICS_IMPLEMENTATION

#define PHYS_API inline

typedef struct {
  float x;
  float y;
  float z;
} Vector3;

PHYS_API Vector3 Vector3Zero(void) {
  Vector3 result = {0.0f, 0.0f, 0.0f};

  return result;
}

PHYS_API Vector3 Vector3Invert(Vector3 v) {
  Vector3 result = {-v.x, -v.y, -v.z};

  return result;
}

// Gets the magnitude or length of a Vector3
PHYS_API float Vector3Magnitude(Vector3 v) {
  return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

// Gets the squared magnitude or length of a Vector3
// Useful for comparing magnitudes and with less cost
PHYS_API float Vector3SquareMagnitude(Vector3 v) {
  return v.x * v.x + v.y * v.y + v.z * v.z;
}

PHYS_API Vector3 Vector3Scale(Vector3 v, float scalar) {
  Vector3 result = {scalar * v.x, scalar * v.y, scalar * v.z};

  return result;
}

PHYS_API Vector3 Vector3Normalize(Vector3 v) {
  Vector3 result = v;

  float magnitude = Vector3Magnitude(v);
  if (magnitude > 0) {
    result = Vector3Scale(v, 1.0f / magnitude);
  }
  return result;
}

PHYS_API Vector3 Vector3Add(Vector3 v1, Vector3 v2) {
  Vector3 result = {v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};

  return result;
}

// Subtracts v1 from v2 (v1 - v2)
PHYS_API Vector3 Vector3Subtract(Vector3 v1, Vector3 v2) {
  Vector3 result = {v1.x - v2.x, v1.y - v2.y, v1.z - v2.z};

  return result;
}

#endif // PHYSICS_IMPLEMENTATION

#endif // PHYSICS_H_
