project (Geo2Json VERSION 1.0.0)

add_executable(Geo2Json Geo2Json.c)
set_target_properties(Geo2Json PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
