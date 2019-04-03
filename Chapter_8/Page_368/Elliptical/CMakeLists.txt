project (EllipticalStatic VERSION 1.0.1)



add_executable(EllipticalStatic Elliptical.c)

target_link_libraries(EllipticalStatic PRIVATE HFCallibStatic)

set_target_properties(EllipticalStatic PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
