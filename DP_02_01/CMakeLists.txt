cmake_minimum_required(VERSION 3.5)

project(DP_02_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADERS_LIST text.h decoratedtext.h taggedtext.h italictext.h boldtext.h paragraph.h link.h reversed.h)
set(SRC_LIST)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_LIST} ${SRC_LIST})
