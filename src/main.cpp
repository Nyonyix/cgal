#include <iostream>

#include "star.hpp"
#include "json.hpp"
#include "gallib.hpp"

int main(int argc, char *argv[])
{

  nlohmann::json j;

  Star *tst = new Star(gallib::LoadJson("def.json", "star"));

  std::cout << tst->GetSpectralClass() << std::endl;
  j = gallib::LoadJson("def.json", "star");
  std::cout << j << std::endl;

  return 0;
}
