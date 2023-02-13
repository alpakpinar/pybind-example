#include "ApolloSM/ApolloSM.hh"

ApolloSM::ApolloSM(const std::string & identifier) :
    identifier(identifier)
{
}

std::string ApolloSM::GetIdentifier()
{
    return identifier;
}

void ApolloSM::SetIdentifier(const std::string & _identifier)
{
    identifier = _identifier;
}