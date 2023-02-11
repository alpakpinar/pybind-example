# ApolloSM PyBind11 Example

`pybind11` example code with a super simple `ApolloSM` class.

The Python wrapper code in `src/ApolloSM/ApolloSM.cpp` will produce a C++ library which contains the `ApolloSM` class and it's methods. This can then be imported from Python. To build the source code, execute:

```bash
make
```

The build is currently tested on MacOS.

And after that, you can import the `ApolloSM` class when you launch Python CLI from **the same directory** as the C++ library by executing `python3`:

```python
>>> from ApolloSM import ApolloSM
>>> sm = ApolloSM("SM209")
>>> sm.GetIdentifier()
'SM209'
>>> sm.SetIdentifier("SM208")
>>> sm.GetIdentifier()
'SM208'
```