project (PirateGameFixed VERSION 1.0.0)

add_executable(PirateGameFixed PirateGameFixed.c)
set_target_properties(PirateGameFixed PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})