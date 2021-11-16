#include "json.hpp"
#include <string>
#include "fstream"

namespace gallib
{
auto LoadJson(std::string file_name, std::string object)
    {
      std::ifstream i("res/" + file_name);
      nlohmann::json j;
      i >> j;

      return j["def"][object];
    }
}
