project (Scuba VERSION 1.0.0)

add_executable(Scuba Scuba.c)
set_target_properties(Scuba PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})