cmake_minimum_required(VERSION 3.22)
enable_testing()
set(ATOMIC_TESTS_PERFORM CACHE STRING "Enable atomic tests")

include(${CMAKE_CURRENT_LIST_DIR}/lib/atomic-tests/cmake/atomic-tests.cmake)

project(test-project)
add_executable(${PROJECT_NAME} main.c)
add_subdirectory(lib)
target_link_libraries(${PROJECT_NAME} containers event-handler callbacks)