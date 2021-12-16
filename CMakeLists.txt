cmake_minimum_required(VERSION 3.17)
project(experiment)

set(CMAKE_CXX_STANDARD 14)
SEt(CMAKE_CXX_FLAGS_RELEASE "-O3")
add_executable(experiment main.cpp ArraySequence.hpp Dict.hpp DictList.hpp DictNode.hpp DictNodeList.h DynamicArray.hpp HelpArray.hpp HelpList.hpp Hist.hpp Idictionary.hpp LinkedList.hpp ListSequence.hpp sequence.hpp sort.hpp SubExpressionArray.hpp SubExpressionList.hpp)