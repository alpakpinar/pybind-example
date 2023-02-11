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

/*
 * Python binding for the ApolloSM class.
 */

namespace py = pybind11;

PYBIND11_MODULE(ApolloSM, m) {
    py::class_<ApolloSM>(m, "ApolloSM")
        .def(py::init<const std::string &>())
        .def("GetIdentifier", &ApolloSM::GetIdentifier)
        .def("SetIdentifier", &ApolloSM::SetIdentifier);
}
