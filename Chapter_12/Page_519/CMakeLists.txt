project (BeerVersion VERSION 1.0.0)

add_executable(BeerVersionA BeerVersionA.c)

set_target_properties(BeerVersionA PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

target_link_libraries( BeerVersionA ${CMAKE_THREAD_LIBS_INIT} )

add_executable(BeerVersionB BeerVersionB.c)

set_target_properties(BeerVersionB PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

