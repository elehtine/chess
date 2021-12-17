add_subdirectory(game)
add_subdirectory(ui)

add_executable(Chess main.c)

target_link_libraries(Chess PUBLIC Game)
target_link_libraries(Chess PUBLIC Ui)
