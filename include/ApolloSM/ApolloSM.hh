#include <string>

#include <pybind11/pybind11.h>

class ApolloSM
{
public:
    ApolloSM(const std::string & identifier);

    std::string GetIdentifier();
    void SetIdentifier(const std::string & _identifier);

private:
    std::string identifier;

};

