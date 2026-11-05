
#include <stdio.h>

#define PHYSICS_IMPLEMENTATION
#include "physics.h"

void Excercise2dot1() {
  printf("\nExercise 2.1:\n");
  Vector3 v = {2, -2, -2};
  Vector3Print(v, "Vector:");

  float mag = Vector3Magnitude(v);
  printf("Magnitude: %f\n", mag);
}

void Excercise2dot2() {
  printf("\nExercise 2.2:\n");
  Vector3 v1 = {3, 1, 2};
  Vector3 v2 = {0, 2, -1};
  Vector3Print(v1, "Vector1:");
  Vector3Print(v2, "Vector2:");

  float alignment = Vector3DotProduct(v1, v2);
  printf("Dot Product: %f\n", alignment);

  if (alignment == 0) {
    printf("These vectors are at a right angle to each other.\n");
  }
}

void Excercise2dot3() {
  printf("\nExercise 2.3:\n");
  Vector3 v1 = {3, 1, 2};
  Vector3Print(v1, "Vector1:");

  float alignment = Vector3DotProduct(v1, v1);
  printf("Dot Product of v1 on iteself: %f\n", alignment);

  float sqrMag = Vector3SquareMagnitude(v1);
  printf("Square Magnitude of v1: %f\n", sqrMag);
}

int main(void) {
  Excercise2dot1();
  Excercise2dot2();
  Excercise2dot3();
}
