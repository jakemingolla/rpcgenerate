# rpcgenerate
# Jake Mingolla & Nathan Long
# Comp 150 IDS Spring 2016
____________

## About

This project was completed for [Internet Scale Distributed Systems](http://www.cs.tufts.edu/comp/150IDS/). It can create client and server code for an RPC system over TCP
for any C++ file meeting the IDL syntax specified [here](http://www.cs.tufts.edu/comp/150IDS/assts/rpc#typefunctionidl). The client can link a resulting .proxy.cpp file and the server can link the resulting .stub.cpp file as a replacement for a normal .cpp file to make the RPC connection invisible to a user.

The pipeline begins with an IDL file which specifies all function signatures and user defined types such as structs or statically allocated arrays. In this project, this can be seen in the example.idl file. From this, the rpcgenerate script uses the idl_to_json parser to create proxy and stub .cpp files based on the IDL file.

For each of the user defined types, rpcgenerate composes templates of builtin types to create templates for sending and receiving user defined types. From these templates, functions can be implemented within the proxy and stub .cpp files by passing the arguments using the templates for each type.

## Example

In order to see an example, I have included a single set of example.idl and example.cpp files on which I ran the rpcgenerate script to generate the resulting example.proxy.cpp and example.stub.cpp files.

## Notes
- The example.cpp file is mostly empty -- this assignment mainly focused on creating the proxy and stub .cpp files that can implement th
- The IDL syntax defined in the project only supports builtin types (i.e. int, float, void, and string), structs, and static arrays. The int type is assumed to be signed 32-bit integers and voids are 32-bit floating precision numbers. Strings are defined using the C++ implementation of C-strings.
- Pointers are **NOT** supported in the IDL syntax. This is due to the relationship between the client and the server, since the memory management requirements to sync together pointer addressing would be near impossible.
- Building this project requires access to the Tufts /comp/150IDS/ directory within the Halligan filesystem.
- Indentation was not considered important enough to maintain during the generation of proxy or stub files, although they should be readable enough for humans to decipher.
