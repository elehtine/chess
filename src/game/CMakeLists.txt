add_library(Game game.c game_start.c moving.c)

target_include_directories (Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
