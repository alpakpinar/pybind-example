CXX=g++

PYBIND11_PATH=pybind11

PYTHON3_EXTENSION_SUFFIX=$(shell python3-config --extension-suffix)

INCLUDE_PATH = \
				-Iinclude  \
				-I${PYBIND11_PATH}/include \
				$(shell python3-config --includes)


default: build

SOURCE = src/ApolloSM/ApolloSM.cpp

CXX_FLAGS = -O3 -Wall -shared -std=c++11 -fPIC -undefined dynamic_lookup ${INCLUDE_PATH}

build:
	${CXX} ${CXX_FLAGS} ${SOURCE} -o ApolloSM${PYTHON3_EXTENSION_SUFFIX}