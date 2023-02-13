#include <string>

class ApolloSM
{
public:
    ApolloSM(const std::string & identifier);

    std::string GetIdentifier();
    void SetIdentifier(const std::string & _identifier);

private:
    std::string identifier;

};

