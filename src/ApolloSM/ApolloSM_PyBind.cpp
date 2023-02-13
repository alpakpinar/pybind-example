#include <pybind11/pybind11.h>

#include "ApolloSM/ApolloSM.hh"

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