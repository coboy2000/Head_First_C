project (FindTrack VERSION 1.0.0)

add_executable(FindTrack FindTrack.c)
set_target_properties(FindTrack PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
