project(bigint)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

add_executable(${PROJECT_NAME}
        src/main.cpp
        src/util.cpp
        )
