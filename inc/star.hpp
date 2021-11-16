#include "json.hpp"
#include <string>

class Star
{

  //Private
  private:
  double mass, radius, luminosity, age, scaler;
  int temperature;
  std::string spectral_class;
  nlohmann::json star_def;

  public:
    Star(nlohmann::json star_def_arg);
  ~Star();

    double GetMass() { return this->mass; }
    double GetRadius() { return this->radius; }
    double GetLuminosity() { return this->luminosity; }
    double GetAge() { return this->age; }
    double GetScaler() { return this->scaler; }
    int GetTemperature() { return this->temperature; }
    std::string GetSpectralClass() { return this->spectral_class; }
};
