project (FoodFixed VERSION 1.0.0)

add_executable(FoodFixed Food.c)
set_target_properties(FoodFixed PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

