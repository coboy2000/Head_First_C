project (PoolPuzzle VERSION 1.0.0)

add_executable(PoolPuzzle PoolPuzzle.c)
set_target_properties(PoolPuzzle PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})