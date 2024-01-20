cmake_minimum_required(VERSION 3.16.3)

set(POJECT_NAME my_first_class)

project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


include_directories("inc/" "src/")


set(
    SOURCES
    main.cpp
    src/first_class.cpp
)


set(
    HEADERS
    inc/first_class.hpp
)

add_executable(class ${SOURCES} ${HEADERS})