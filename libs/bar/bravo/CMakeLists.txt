project(bravo C)

add_library(${PROJECT_NAME}
    src/bravo.c
)

add_library(libs::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:inc>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_features(${PROJECT_NAME}
    PRIVATE
    c_std_99
)

target_compile_definitions(${PROJECT_NAME} INTERFACE
    -DBRAVO=bravo
)
