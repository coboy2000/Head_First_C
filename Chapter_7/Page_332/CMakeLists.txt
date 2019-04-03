project (LibSort VERSION 1.0.0)

add_executable(LibSort LibSort.c)
set_target_properties(LibSort PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
