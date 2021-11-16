
#include "star.hpp"
#include "json.hpp"


Star::Star(nlohmann::json star_def_arg)
{
  this->star_def = star_def_arg;
  this->mass = 1.0;
  this->radius = 1.0;
  this->luminosity = 1.0;
  this->age = 1.0;
  this->scaler = 1.0;
  this->temperature = 1;
  this->spectral_class = "M0";
}    
