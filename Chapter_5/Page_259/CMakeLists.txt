project (EnumTest VERSION 1.0.0)

add_executable(EnumTest EnumTest.c)
set_target_properties(EnumTest PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})