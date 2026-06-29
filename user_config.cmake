# =============================================================================
# user_config.cmake - Add your custom source files here
# =============================================================================
#
# This file is included by the generated CMakeLists.txt and allows you to
# add extra source files to the project without modifying generated files
# (which may be overwritten).
#
# To add your own sources, append them to LV_EDITOR_PROJECT_SOURCES:
#
#   list(APPEND LV_EDITOR_PROJECT_SOURCES
#       ${CMAKE_CURRENT_LIST_DIR}/src/my_widget.c
#       ${CMAKE_CURRENT_LIST_DIR}/src/my_screen.c
#   )
#
# Tip:
#   - Use ${CMAKE_CURRENT_LIST_DIR} to get paths relative to this file
#
# =============================================================================

list(APPEND LV_EDITOR_PROJECT_SOURCES
    # ${CMAKE_CURRENT_LIST_DIR}/my_file.c
)

if(DEFINED PROJECT_SOURCES)
    list(APPEND LV_EDITOR_PROJECT_SOURCES
        ${PROJECT_SOURCES}
    )
endif()

if(DEFINED LVGL_SRC_DIR)
    list(APPEND COMMON_INCLUDE_DIRS
        ${LVGL_SRC_DIR}/src/others
    )
endif()
