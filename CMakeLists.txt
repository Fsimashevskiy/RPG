cmake_minimum_required(VERSION 3.19)
project(untitled)

include(FetchContent)

FetchContent_Declare(json
        GIT_REPOSITORY https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
        GIT_TAG v3.9.1)

FetchContent_GetProperties(json)

if(NOT json_POPULATED)
    FetchContent_Populate(json)
    add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()
set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp)

target_link_libraries(untitled PRIVATE nlohmann_json::nlohmann_json)