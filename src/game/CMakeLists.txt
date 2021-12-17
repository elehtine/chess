add_library(Game game_start.c moving.c memory.c)

target_include_directories (Game PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
