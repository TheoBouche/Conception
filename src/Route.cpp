#include "Route.hpp"

bool Route::operator==(const Route & r) const {

  return villeA_==r.villeA_ and villeB_==r.villeB_ and distance_==r.distance_;
}

bool Route::operator!=(const Route & r) const {

  return !(operator==(r));
}

