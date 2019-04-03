project (Head_First_C-Chapter_1 VERSION 1.0.0)

add_executable(CardsInTheShoe CardsInTheShoe.c)
set_target_properties(CardsInTheShoe PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(CardsFace CardsFace.c)
set_target_properties(CardsFace PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(CardsPage19 CardsPage19.c)
set_target_properties(CardsPage19 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(SwitchCardsPage27 SwitchCardsPage27.c)
set_target_properties(SwitchCardsPage27 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(EffIfCardsPage19 EffIfCardsPage19.c)
set_target_properties(EffIfCardsPage19 PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(WhileCards WhileCards.c)
set_target_properties(WhileCards PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})

add_executable(DoWhileCards DoWhileCards.c)
set_target_properties(DoWhileCards PROPERTIES DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX})