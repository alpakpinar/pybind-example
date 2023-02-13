#
# Example Python3 script to test functionality of the ApolloSM class built
# with PyBind11. Execute this from the same directory as the compiled binary.
#

import sys

# 
# Python interpreter version should be >= 3.6.
# 
if sys.version_info < (3,6):
    raise RuntimeError("Please use a Python interpreter with version >= 3.6.")

from ApolloSM import ApolloSM


def main():
    """The function to test ApolloSM functionality."""
    sm = ApolloSM("SM209")
    print(f"Instantiated an ApolloSM: {sm}")
    print(f"Current identifier: {sm.GetIdentifier()}")
    
    new_identifier = "SM208"
    print(f"Setting identifier to: {new_identifier}")
    sm.SetIdentifier(new_identifier)
    print(f"Current identifier: {sm.GetIdentifier()}")


if __name__ == '__main__':
    main()