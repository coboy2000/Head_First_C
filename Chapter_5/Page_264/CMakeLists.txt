project (Aquarium VERSION 1.0.0)

add_executable(Aquarium Aquarium.c)
set_target_properties(Aquarium PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})