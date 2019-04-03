project (PirateGameBroken VERSION 1.0.0)

add_executable(PirateGameBroken PirateGameBroken.c)
set_target_properties(PirateGameBroken PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
