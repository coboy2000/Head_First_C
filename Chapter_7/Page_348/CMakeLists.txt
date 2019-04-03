project (PriceDrinks VERSION 1.0.0)

add_executable(PriceDrinks PriceDrinks.c)
set_target_properties(PriceDrinks PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})
