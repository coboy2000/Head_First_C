cmake_minimum_required(VERSION 3.12.4)

project (Head_First_C VERSION 1.0.0)

if(NOT CMAKE_DEBUG_POSTFIX)
  set(CMAKE_DEBUG_POSTFIX d)
endif()

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)

find_package(Threads REQUIRED)

if(CMAKE_USE_PTHREADS_INIT)
    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} "-pthread")
endif()

#set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Wconversion")
#set(GCC_COVERAGE_COMPILE_FLAGS "-ggdb -Wall -Wextra -Wconversion")
set(GCC_COVERAGE_COMPILE_FLAGS "-ggdb -Wall -Wextra -Wconversion -lpthread")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

#enable Same name/duplicate target
#SET_PROPERTY(GLOBAL APPEND PROPERTY ALLOW_DUPLICATE_CUSTOM_TARGETS 1)

add_subdirectory(Chapter_1)

add_subdirectory(Chapter_2)

add_subdirectory(Chapter_2.5)

add_subdirectory(Chapter_3)

add_subdirectory(Chapter_4)

add_subdirectory(Chapter_5)

add_subdirectory(Chapter_6)

add_subdirectory(Chapter_7)

add_subdirectory(Chapter_8)

add_subdirectory(Chapter_9)

add_subdirectory(Chapter_10)

add_subdirectory(Chapter_11)

add_subdirectory(Chapter_12)