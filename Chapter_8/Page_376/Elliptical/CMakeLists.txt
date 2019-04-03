project (SharedElliptical VERSION 1.0.1)



add_executable(SharedElliptical Elliptical.c)

set_target_properties(SharedElliptical PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

target_link_libraries(SharedElliptical PRIVATE HFCallib)

