add_library(Game game_start.c moving.c)

target_include_directories (Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
