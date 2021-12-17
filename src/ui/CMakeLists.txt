add_library(Ui drawing.c)

target_link_libraries(Ui PUBLIC Game)
target_include_directories (Ui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
