{\rtf1\ansi\ansicpg1252\cocoartf1671
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 cmake_minimum_required(VERSION 2.6)\
project(Reseau Neurones)\
\
if(NOT CMAKE_BUILD_TYPE)\
  set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)\
endif(NOT CMAKE_BUILD_TYPE)\
SET(CMAKE_CXX_FLAGS "$\{CMAKE_CXX_FLAGS\} -std=c++11")\
SET(CMAKE_CXX_FLAGS_DEBUG "$\{CMAKE_CXX_FLAGS_DEBUG\} -Wall -pedantic")\
SET(CMAKE_CXX_FLAGS_RELEASE "$\{CMAKE_CXX_FLAGS_RELEASE\} -O3")\
option(test "Build tests." ON)\
\
include_directories("/usr/local/include" $\{CMAKE_SOURCE_DIR\}/include)\
link_directories($\{CMAKE_SOURCE_DIR\}/lib)\
\
add_executable(ReseauNeurone src/Neurone.cpp src/Network.cpp src/main.cpp)\
\
if (test)\
  enable_testing()\
  find_package(GTest)\
  if (NOT GTEST_FOUND)\
    SET(GTEST_INCLUDE_DIRS $\{CMAKE_SOURCE_DIR\}/include)\
    SET(GTEST_BOTH_LIBRARIES libgtest.a libgtest_main.a)\
  endif(NOT GTEST_FOUND)\
  include_directories($\{GTEST_INCLUDE_DIRS\})\
  add_executable(testNeurone src/Neurone.cpp src/Network.cpp src/test_neurone.cpp)\
  target_link_libraries(testNetSim $\{GTEST_BOTH_LIBRARIES\} pthread)\
  add_test(Network_simulation testNeurone)\
endif(test)\
\
find_package(Doxygen)\
if (DOXYGEN_FOUND)\
  add_custom_target(doc $\{DOXYGEN_EXECUTABLE\} $\{CMAKE_SOURCE_DIR\}/Doxyfile\
                    WORKING_DIRECTORY $\{CMAKE_CURRENT_BINARY_DIR\}\
                    COMMENT "Generating API documentation with Doxygen" VERBATIM)\
endif(DOXYGEN_FOUND)\
}