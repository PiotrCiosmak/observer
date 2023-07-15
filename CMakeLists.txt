cmake_minimum_required(VERSION 3.25)
project(observer)

set(CMAKE_CXX_STANDARD 23)

add_executable(observer main.cpp include/IObserver.hpp include/ISubject.hpp src/Subject.cpp include/Subject.hpp src/Observer.cpp include/Observer.hpp)
