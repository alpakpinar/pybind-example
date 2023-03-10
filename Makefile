CXX=g++

PYBIND11_PATH=pybind11

PYTHON3_EXTENSION_SUFFIX=$(shell python3-config --extension-suffix)

INCLUDE_PATH = \
				-Iinclude  \
				-I${PYBIND11_PATH}/include \
				$(shell python3-config --includes)


default: build

SOURCES = $(wildcard src/ApolloSM/*cpp)

CXX_FLAGS = -O3 -Wall -shared -std=c++11 -fPIC ${INCLUDE_PATH}

# -undefined dynamic_lookup is needed for MacOS to ignore missing symbols
ifeq ($(shell uname -s),Darwin)
	CXX_FLAGS += -undefined dynamic_lookup
endif

build:
	${CXX} ${CXX_FLAGS} ${SOURCES} -o ApolloSM${PYTHON3_EXTENSION_SUFFIX}